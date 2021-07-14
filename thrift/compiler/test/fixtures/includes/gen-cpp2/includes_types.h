/**
 * Autogenerated by Thrift for src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "thrift/compiler/test/fixtures/includes/gen-cpp2/transitive_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct MyIntField;
struct MyTransitiveField;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_MyIntField
#define APACHE_THRIFT_ACCESSOR_MyIntField
APACHE_THRIFT_DEFINE_ACCESSOR(MyIntField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_MyTransitiveField
#define APACHE_THRIFT_ACCESSOR_MyTransitiveField
APACHE_THRIFT_DEFINE_ACCESSOR(MyTransitiveField);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Included;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef ::std::int64_t IncludedInt64;
typedef ::cpp2::Foo TransitiveFoo;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class Included final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Included;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Included() :
      MyIntField(0LL),
      MyTransitiveField(::apache::thrift::detail::make_constant< ::cpp2::Foo>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::a>(2LL))) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Included(apache::thrift::FragileConstructor, ::std::int64_t MyIntField__arg, ::cpp2::Foo MyTransitiveField__arg);

  Included(Included&&) = default;

  Included(const Included&) = default;


  Included& operator=(Included&&) = default;

  Included& operator=(const Included&) = default;
  void __clear();
 private:
  ::std::int64_t MyIntField;
 private:
  ::cpp2::Foo MyTransitiveField;

 private:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool MyIntField;
    bool MyTransitiveField;
  } __isset = {};

 public:

  bool operator==(const Included&) const;
  bool operator<(const Included&) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyIntField_ref() const& {
    return {this->MyIntField, __isset.MyIntField};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyIntField_ref() const&& {
    return {std::move(this->MyIntField), __isset.MyIntField};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyIntField_ref() & {
    return {this->MyIntField, __isset.MyIntField};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyIntField_ref() && {
    return {std::move(this->MyIntField), __isset.MyIntField};
  }

  template <typename..., typename T = ::cpp2::Foo>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyTransitiveField_ref() const& {
    return {this->MyTransitiveField, __isset.MyTransitiveField};
  }

  template <typename..., typename T = ::cpp2::Foo>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyTransitiveField_ref() const&& {
    return {std::move(this->MyTransitiveField), __isset.MyTransitiveField};
  }

  template <typename..., typename T = ::cpp2::Foo>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyTransitiveField_ref() & {
    return {this->MyTransitiveField, __isset.MyTransitiveField};
  }

  template <typename..., typename T = ::cpp2::Foo>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyTransitiveField_ref() && {
    return {std::move(this->MyTransitiveField), __isset.MyTransitiveField};
  }

  ::std::int64_t get_MyIntField() const {
    return MyIntField;
  }

  [[deprecated("Use `FOO.MyIntField_ref() = BAR;` instead of `FOO.set_MyIntField(BAR);`")]]
  ::std::int64_t& set_MyIntField(::std::int64_t MyIntField_) {
    MyIntField = MyIntField_;
    __isset.MyIntField = true;
    return MyIntField;
  }
  const ::cpp2::Foo& get_MyTransitiveField() const&;
  ::cpp2::Foo get_MyTransitiveField() &&;

  template <typename T_Included_MyTransitiveField_struct_setter = ::cpp2::Foo>
  [[deprecated("Use `FOO.MyTransitiveField_ref() = BAR;` instead of `FOO.set_MyTransitiveField(BAR);`")]]
  ::cpp2::Foo& set_MyTransitiveField(T_Included_MyTransitiveField_struct_setter&& MyTransitiveField_) {
    MyTransitiveField = std::forward<T_Included_MyTransitiveField_struct_setter>(MyTransitiveField_);
    __isset.MyTransitiveField = true;
    return MyTransitiveField;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Included>;
  friend void swap(Included& a, Included& b);
};

template <class Protocol_>
uint32_t Included::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
THRIFT_IGNORE_ISSET_USE_WARNING_END
