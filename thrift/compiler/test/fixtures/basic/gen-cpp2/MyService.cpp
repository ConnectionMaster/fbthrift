/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/MyService.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/MyService.tcc"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyServiceSvIf::getProcessor() {
  return std::make_unique<MyServiceAsyncProcessor>(this);
}


void MyServiceSvIf::ping() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("ping");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_ping() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  ping();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> MyServiceSvIf::future_ping() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_ping(), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_ping(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_ping.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_ping.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_ping();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_ping();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ping();
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

void MyServiceSvIf::getRandomData(::std::string& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getRandomData");
}

folly::SemiFuture<std::unique_ptr<::std::string>> MyServiceSvIf::semifuture_getRandomData() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_getRandomData.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::string>();
  getRandomData(*ret);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::string>> MyServiceSvIf::future_getRandomData() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_getRandomData.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_getRandomData(), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_getRandomData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_getRandomData.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_getRandomData.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_getRandomData();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_getRandomData();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::string _return;
        getRandomData(_return);
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

void MyServiceSvIf::sink(::std::int64_t /*sink*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("sink");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_sink(::std::int64_t p_sink) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_sink.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  sink(p_sink);
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> MyServiceSvIf::future_sink(::std::int64_t p_sink) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_sink.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_sink(p_sink), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_sink(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, ::std::int64_t p_sink) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_sink.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_sink.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_sink(p_sink);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_sink(p_sink);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        sink(p_sink);
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

void MyServiceSvIf::putDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("putDataById");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_putDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_putDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  putDataById(p_id, std::move(p_data));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> MyServiceSvIf::future_putDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_putDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_putDataById(p_id, std::move(p_data)), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, ::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_putDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_putDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_putDataById(p_id, std::move(p_data));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_putDataById(p_id, std::move(p_data));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        putDataById(p_id, std::move(p_data));
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

bool MyServiceSvIf::hasDataById(::std::int64_t /*id*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("hasDataById");
}

folly::SemiFuture<bool> MyServiceSvIf::semifuture_hasDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_hasDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return hasDataById(p_id);
}

folly::Future<bool> MyServiceSvIf::future_hasDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_hasDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_hasDataById(p_id), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, ::std::int64_t p_id) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_hasDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_hasDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_hasDataById(p_id);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_hasDataById(p_id);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(hasDataById(p_id));
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

void MyServiceSvIf::getDataById(::std::string& /*_return*/, ::std::int64_t /*id*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getDataById");
}

folly::SemiFuture<std::unique_ptr<::std::string>> MyServiceSvIf::semifuture_getDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_getDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::string>();
  getDataById(*ret, p_id);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::string>> MyServiceSvIf::future_getDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_getDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_getDataById(p_id), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, ::std::int64_t p_id) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_getDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_getDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_getDataById(p_id);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_getDataById(p_id);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::string _return;
        getDataById(_return, p_id);
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

void MyServiceSvIf::deleteDataById(::std::int64_t /*id*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("deleteDataById");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_deleteDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_deleteDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  deleteDataById(p_id);
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> MyServiceSvIf::future_deleteDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_deleteDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_deleteDataById(p_id), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_deleteDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, ::std::int64_t p_id) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_deleteDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_deleteDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_deleteDataById(p_id);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_deleteDataById(p_id);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        deleteDataById(p_id);
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

void MyServiceSvIf::lobDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("lobDataById");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_lobDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_lobDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  lobDataById(p_id, std::move(p_data));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> MyServiceSvIf::future_lobDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_lobDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_lobDataById(p_id, std::move(p_data)), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, ::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_lobDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_lobDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_lobDataById(p_id, std::move(p_data));
        apache::thrift::detail::si::async_tm_future_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_lobDataById(p_id, std::move(p_data));
        apache::thrift::detail::si::async_tm_semifuture_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        lobDataById(p_id, std::move(p_data));
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

void MyServiceSvNull::ping() {
  return;
}

void MyServiceSvNull::getRandomData(::std::string& /*_return*/) {}

void MyServiceSvNull::sink(::std::int64_t /*sink*/) {
  return;
}

void MyServiceSvNull::putDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  return;
}

bool MyServiceSvNull::hasDataById(::std::int64_t /*id*/) {
  return 0;
}

void MyServiceSvNull::getDataById(::std::string& /*_return*/, ::std::int64_t /*id*/) {}

void MyServiceSvNull::deleteDataById(::std::int64_t /*id*/) {
  return;
}

void MyServiceSvNull::lobDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  return;
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
  {"ping", &MyServiceAsyncProcessor::setUpAndProcess_ping<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getRandomData", &MyServiceAsyncProcessor::setUpAndProcess_getRandomData<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"sink", &MyServiceAsyncProcessor::setUpAndProcess_sink<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"putDataById", &MyServiceAsyncProcessor::setUpAndProcess_putDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"hasDataById", &MyServiceAsyncProcessor::setUpAndProcess_hasDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getDataById", &MyServiceAsyncProcessor::setUpAndProcess_getDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"deleteDataById", &MyServiceAsyncProcessor::setUpAndProcess_deleteDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"lobDataById", &MyServiceAsyncProcessor::setUpAndProcess_lobDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyServiceAsyncProcessor::ProcessMap& MyServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyServiceAsyncProcessor::ProcessMap MyServiceAsyncProcessor::compactProcessMap_ {
  {"ping", &MyServiceAsyncProcessor::setUpAndProcess_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getRandomData", &MyServiceAsyncProcessor::setUpAndProcess_getRandomData<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"sink", &MyServiceAsyncProcessor::setUpAndProcess_sink<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"putDataById", &MyServiceAsyncProcessor::setUpAndProcess_putDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"hasDataById", &MyServiceAsyncProcessor::setUpAndProcess_hasDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getDataById", &MyServiceAsyncProcessor::setUpAndProcess_getDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"deleteDataById", &MyServiceAsyncProcessor::setUpAndProcess_deleteDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"lobDataById", &MyServiceAsyncProcessor::setUpAndProcess_lobDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
