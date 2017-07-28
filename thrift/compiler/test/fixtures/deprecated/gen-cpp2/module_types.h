/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace cpp2 {

class House;
class Field;
typedef int64_t ColorID;

class FOLLY_DEPRECATED(
  "class House is deprecated"
) House : private apache::thrift::detail::st::ComparisonOperators<House> {
 public:

  House() :
      id(0) {}
  // FragileConstructor for use in initialization lists only

  House(apache::thrift::FragileConstructor,  ::cpp2::ColorID id__arg, std::string houseName__arg, std::set< ::cpp2::ColorID> houseColors__arg) :
      id(std::move(id__arg)),
      houseName(std::move(houseName__arg)),
      houseColors(std::move(houseColors__arg)) {}
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  House(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    House(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    id = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  House(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    House(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    houseName = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  House(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    House(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    houseColors = arg.move();
  }

  House(House&&) = default;

  House(const House&) = default;

  House& operator=(House&&) = default;

  House& operator=(const House&) = default;
  void __clear();

  virtual ~House() {}

   ::cpp2::ColorID id;
  std::string houseName;
  folly::Optional<std::set< ::cpp2::ColorID>> FOLLY_DEPRECATED(
    "Not used anymore"
  )  houseColors;
  bool operator==(const House& rhs) const;
  bool operator < (const House& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(House& a, House& b);
extern template uint32_t House::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t House::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t House::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t House::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t House::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t House::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t House::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t House::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::House>::clear( ::cpp2::House* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::House>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::House>::write(Protocol* proto,  ::cpp2::House const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::House>::read(Protocol* proto,  ::cpp2::House* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::House>::serializedSize(Protocol const* proto,  ::cpp2::House const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::House>::serializedSizeZC(Protocol const* proto,  ::cpp2::House const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class FOLLY_DEPRECATED(
  "No longer supported"
) Field : private apache::thrift::detail::st::ComparisonOperators<Field> {
 public:

  Field() :
      id(0),
      fieldType(5) {}
  // FragileConstructor for use in initialization lists only

  Field(apache::thrift::FragileConstructor,  ::cpp2::ColorID id__arg, int32_t fieldType__arg) :
      id(std::move(id__arg)),
      fieldType(std::move(fieldType__arg)) {}
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Field(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Field(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    id = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Field(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Field(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldType = arg.move();
  }

  Field(Field&&) = default;

  Field(const Field&) = default;

  Field& operator=(Field&&) = default;

  Field& operator=(const Field&) = default;
  void __clear();

  virtual ~Field() {}

   ::cpp2::ColorID id;
  int32_t FOLLY_DEPRECATED(
    "int32_t fieldType is deprecated"
  )  fieldType;
  bool operator==(const Field& rhs) const;
  bool operator < (const Field& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Field& a, Field& b);
extern template uint32_t Field::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Field::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Field::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Field::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Field::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Field::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Field::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Field::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Field>::clear( ::cpp2::Field* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Field>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Field>::write(Protocol* proto,  ::cpp2::Field const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Field>::read(Protocol* proto,  ::cpp2::Field* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Field>::serializedSize(Protocol const* proto,  ::cpp2::Field const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Field>::serializedSizeZC(Protocol const* proto,  ::cpp2::Field const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2
