/**
 * Autogenerated by Thrift for src/include2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::some::ns::IncludedB> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace some { namespace ns {

template <class Protocol_>
void IncludedB::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_i32Field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->i32Field, _readState);
    
  }
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  this->__isset.i32Field = true;
  THRIFT_IGNORE_ISSET_USE_WARNING_END

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_strField:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->strField, _readState);
    
  }
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  this->__isset.strField = true;
  THRIFT_IGNORE_ISSET_USE_WARNING_END

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<IncludedB>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_i32Field;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_strField;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t IncludedB::serializedSize(Protocol_ const* prot_) const {
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("IncludedB");
  {
    xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->i32Field);
  }
  {
    xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->strField);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
  THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template <class Protocol_>
uint32_t IncludedB::serializedSizeZC(Protocol_ const* prot_) const {
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("IncludedB");
  {
    xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->i32Field);
  }
  {
    xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->strField);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
  THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template <class Protocol_>
uint32_t IncludedB::write(Protocol_* prot_) const {
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("IncludedB");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "i32Field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->i32Field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 2, kPrevFieldId>(*prot_, "strField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->strField);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
  THRIFT_IGNORE_ISSET_USE_WARNING_END
}

extern template void IncludedB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t IncludedB::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t IncludedB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void IncludedB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t IncludedB::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t IncludedB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
