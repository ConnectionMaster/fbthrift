/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNode.h"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNode.tcc"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyNodeSvIf::getProcessor() {
  return std::make_unique<MyNodeAsyncProcessor>(this);
}


void MyNodeSvIf::do_mid() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("do_mid");
}

folly::SemiFuture<folly::Unit> MyNodeSvIf::semifuture_do_mid() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_do_mid.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  do_mid();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> MyNodeSvIf::future_do_mid() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_do_mid.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_do_mid(), getInternalKeepAlive());
}

void MyNodeSvIf::async_tm_do_mid(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_do_mid.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_do_mid.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_do_mid();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_do_mid();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        do_mid();
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void MyNodeSvNull::do_mid() {
  return;
}



const char* MyNodeAsyncProcessor::getServiceName() {
  return "MyNode";
}

void MyNodeAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<MyNodeSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void MyNodeAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> MyNodeAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const MyNodeAsyncProcessor::ProcessMap& MyNodeAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyNodeAsyncProcessor::ProcessMap MyNodeAsyncProcessor::binaryProcessMap_ {
  {"do_mid", &MyNodeAsyncProcessor::setUpAndProcess_do_mid<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyNodeAsyncProcessor::ProcessMap& MyNodeAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyNodeAsyncProcessor::ProcessMap MyNodeAsyncProcessor::compactProcessMap_ {
  {"do_mid", &MyNodeAsyncProcessor::setUpAndProcess_do_mid<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
