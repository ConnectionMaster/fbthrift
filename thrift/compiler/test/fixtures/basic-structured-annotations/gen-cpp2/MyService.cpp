/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/MyService.h"
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/MyService.tcc"
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyServiceSvIf::getProcessor() {
  return std::make_unique<MyServiceAsyncProcessor>(this);
}


void MyServiceSvIf::first(::cpp2::annotated_inline_string& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("first");
}

folly::SemiFuture<std::unique_ptr<::cpp2::annotated_inline_string>> MyServiceSvIf::semifuture_first() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_first.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::cpp2::annotated_inline_string>();
  first(*ret);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::cpp2::annotated_inline_string>> MyServiceSvIf::future_first() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_first.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_first(), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_first(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::cpp2::annotated_inline_string>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_first.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_first.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_first();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_first();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::cpp2::annotated_inline_string _return;
        first(_return);
        callback->result(_return);
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

bool MyServiceSvIf::second(::std::int64_t /*count*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("second");
}

folly::SemiFuture<bool> MyServiceSvIf::semifuture_second(::std::int64_t p_count) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_second.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return second(p_count);
}

folly::Future<bool> MyServiceSvIf::future_second(::std::int64_t p_count) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_second.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_second(p_count), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_second(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, ::std::int64_t p_count) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_second.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_second.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_second(p_count);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_second(p_count);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(second(p_count));
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

void MyServiceSvNull::first(::cpp2::annotated_inline_string& /*_return*/) {}

bool MyServiceSvNull::second(::std::int64_t /*count*/) {
  return 0;
}



const char* MyServiceAsyncProcessor::getServiceName() {
  return "MyService";
}

void MyServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<MyServiceSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void MyServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> MyServiceAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const MyServiceAsyncProcessor::ProcessMap& MyServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyServiceAsyncProcessor::ProcessMap MyServiceAsyncProcessor::binaryProcessMap_ {
  {"first", &MyServiceAsyncProcessor::setUpAndProcess_first<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"second", &MyServiceAsyncProcessor::setUpAndProcess_second<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyServiceAsyncProcessor::ProcessMap& MyServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyServiceAsyncProcessor::ProcessMap MyServiceAsyncProcessor::compactProcessMap_ {
  {"first", &MyServiceAsyncProcessor::setUpAndProcess_first<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"second", &MyServiceAsyncProcessor::setUpAndProcess_second<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
