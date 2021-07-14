/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/Service.h"
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/Service.tcc"
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> ServiceSvIf::getProcessor() {
  return std::make_unique<ServiceAsyncProcessor>(this);
}

ServiceSvIf::CreateMethodMetadataResult ServiceSvIf::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<ServiceAsyncProcessor>();
}


::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t> ServiceSvIf::func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> /*arg1*/, std::unique_ptr<::cpp2::Foo> /*arg2*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("func");
}

folly::SemiFuture<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t>> ServiceSvIf::semifuture_func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> p_arg1, std::unique_ptr<::cpp2::Foo> p_arg2) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_func.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return func(std::move(p_arg1), std::move(p_arg2));
}

folly::Future<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t>> ServiceSvIf::future_func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> p_arg1, std::unique_ptr<::cpp2::Foo> p_arg2) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_func.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_func(std::move(p_arg1), std::move(p_arg2)), getInternalKeepAlive());
}

void ServiceSvIf::async_tm_func(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t>>> callback, std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> p_arg1, std::unique_ptr<::cpp2::Foo> p_arg2) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_func.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_func.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_func(std::move(p_arg1), std::move(p_arg2));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_func(std::move(p_arg1), std::move(p_arg2));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(func(std::move(p_arg1), std::move(p_arg2)));
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

::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t> ServiceSvNull::func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> /*arg1*/, std::unique_ptr<::cpp2::Foo> /*arg2*/) {
  return 0;
}



const char* ServiceAsyncProcessor::getServiceName() {
  return "Service";
}

void ServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<ServiceSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void ServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void ServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

const ServiceAsyncProcessor::ProcessMap& ServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const ServiceAsyncProcessor::ProcessMap ServiceAsyncProcessor::kOwnProcessMap_ {
  {"func", {&ServiceAsyncProcessor::setUpAndProcess_func<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &ServiceAsyncProcessor::setUpAndProcess_func<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

} // cpp2
