/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioChild.h"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioChild.tcc"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyServicePrioChildSvIf::getProcessor() {
  return std::make_unique<MyServicePrioChildAsyncProcessor>(this);
}


void MyServicePrioChildSvIf::pang() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("pang");
}

folly::SemiFuture<folly::Unit> MyServicePrioChildSvIf::semifuture_pang() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_pang.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  pang();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> MyServicePrioChildSvIf::future_pang() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_pang.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_pang(), getInternalKeepAlive());
}

void MyServicePrioChildSvIf::async_tm_pang(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_pang.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_pang.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_pang();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_pang();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        pang();
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

void MyServicePrioChildSvNull::pang() {
  return;
}



const char* MyServicePrioChildAsyncProcessor::getServiceName() {
  return "MyServicePrioChild";
}

void MyServicePrioChildAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<MyServicePrioChildSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void MyServicePrioChildAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> MyServicePrioChildAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const MyServicePrioChildAsyncProcessor::ProcessMap& MyServicePrioChildAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyServicePrioChildAsyncProcessor::ProcessMap MyServicePrioChildAsyncProcessor::binaryProcessMap_ {
  {"pang", &MyServicePrioChildAsyncProcessor::setUpAndProcess_pang<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyServicePrioChildAsyncProcessor::ProcessMap& MyServicePrioChildAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyServicePrioChildAsyncProcessor::ProcessMap MyServicePrioChildAsyncProcessor::compactProcessMap_ {
  {"pang", &MyServicePrioChildAsyncProcessor::setUpAndProcess_pang<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
