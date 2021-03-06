/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <atomic>

#include <folly/io/async/EventBase.h>

namespace apache {
namespace thrift {

class RequestStateMachine {
 public:
  // Returns true if the request has not been cancelled (via tryCancel())
  //
  // Note: using this method from a thread other than that of eventBase_
  //       presents a data race condition. As such, the isActive() API returning
  //       true should be considered a weak promise that a request is active
  //       and should not be relied upon for the purposes of synchronization.
  bool isActive() const {
    return !cancelled_.load(std::memory_order_relaxed);
  }

  // Instruct whether request no longer requires processing.
  // This API may only be called from IO worker thread of the request.
  // @return: whether request has already been in "cancelled" stage
  // before calling the API.
  // Suggested usages of the API:
  // * queue/task timeout has sent load shedding response, and no further
  //   response is needed
  // * client has closed its connection and does not expect a response
  [[nodiscard]] bool tryCancel(folly::EventBase* eb) {
    eb->dcheckIsInEventBaseThread();
    if (cancelled_.load(std::memory_order_relaxed)) {
      return false;
    }
    cancelled_.store(true, std::memory_order_relaxed);
    return true;
  }

  // The tryStartProcessing() API is used to mark the request as started
  // processing. This method is ultimately called by request processors. A
  // return value of true indicates that request processing can begin. A return
  // value of false indicates that request processing should be aborted.
  [[nodiscard]] bool tryStartProcessing() {
    if (cancelled_.load(std::memory_order_relaxed) ||
        startProcessingOrQueueTimeout_.exchange(
            true, std::memory_order_relaxed)) {
      return false;
    }
    infoStartedProcessing_.store(true, std::memory_order_relaxed);
    return true;
  }

  // The tryStopProcessing() API is used to mark the request as stopped by queue
  // timeout callbacks. A return value of true indicates that queue timeout
  // handling can begin. A return value of false indicates that queue timeout
  // handling should be aborted.
  [[nodiscard]] bool tryStopProcessing() {
    return !startProcessingOrQueueTimeout_.exchange(
        true, std::memory_order_relaxed);
  }

  bool getStartedProcessing() const {
    return infoStartedProcessing_.load(std::memory_order_relaxed);
  }

 private:
  std::atomic<bool> startProcessingOrQueueTimeout_{false};
  std::atomic<bool> cancelled_{false};

  std::atomic<bool> infoStartedProcessing_{false};
};

} // namespace thrift
} // namespace apache
