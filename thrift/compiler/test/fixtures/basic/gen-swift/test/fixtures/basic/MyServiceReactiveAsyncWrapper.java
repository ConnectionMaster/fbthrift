/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import java.util.*;

public class MyServiceReactiveAsyncWrapper 
  implements MyService.Async {
  private MyService.Reactive _delegate;

  public MyServiceReactiveAsyncWrapper(MyService.Reactive _delegate) {
    
    this._delegate = _delegate;
  }

  @java.lang.Override
  public void close() {
    _delegate.close();
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<Void> ping() {
      return com.facebook.swift.transport.util.FutureUtil.toListenableFuture(_delegate.ping());
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<String> getRandomData() {
      return com.facebook.swift.transport.util.FutureUtil.toListenableFuture(_delegate.getRandomData());
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<Void> sink(final long sink) {
      return com.facebook.swift.transport.util.FutureUtil.toListenableFuture(_delegate.sink(sink));
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<Void> putDataById(final long id, final String data) {
      return com.facebook.swift.transport.util.FutureUtil.toListenableFuture(_delegate.putDataById(id, data));
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<Boolean> hasDataById(final long id) {
      return com.facebook.swift.transport.util.FutureUtil.toListenableFuture(_delegate.hasDataById(id));
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<String> getDataById(final long id) {
      return com.facebook.swift.transport.util.FutureUtil.toListenableFuture(_delegate.getDataById(id));
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<Void> deleteDataById(final long id) {
      return com.facebook.swift.transport.util.FutureUtil.toListenableFuture(_delegate.deleteDataById(id));
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<Void> lobDataById(final long id, final String data) {
      return com.facebook.swift.transport.util.FutureUtil.toListenableFuture(_delegate.lobDataById(id, data));
  }

}