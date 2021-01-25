// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var GoUnusedProtection__ int;

type MyEnum int64
const (
  MyEnum_MyValue1 MyEnum = 0
  MyEnum_MyValue2 MyEnum = 1
  MyEnum_DOMAIN MyEnum = 2
)

var MyEnumToName = map[MyEnum]string {
  MyEnum_MyValue1: "MyValue1",
  MyEnum_MyValue2: "MyValue2",
  MyEnum_DOMAIN: "DOMAIN",
}

var MyEnumToValue = map[string]MyEnum {
  "MyValue1": MyEnum_MyValue1,
  "MyValue2": MyEnum_MyValue2,
  "DOMAIN": MyEnum_DOMAIN,
}

var MyEnumNames = []string {
  "MyValue1",
  "MyValue2",
  "DOMAIN",
}

var MyEnumValues = []MyEnum {
  MyEnum_MyValue1,
  MyEnum_MyValue2,
  MyEnum_DOMAIN,
}

func (p MyEnum) String() string {
  if v, ok := MyEnumToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MyEnumFromString(s string) (MyEnum, error) {
  if v, ok := MyEnumToValue[s]; ok {
    return v, nil
  }
  return MyEnum(0), fmt.Errorf("not a valid MyEnum string")
}

func MyEnumPtr(v MyEnum) *MyEnum { return &v }

// Attributes:
//  - Name
type MyStructNestedAnnotation struct {
  Name string `thrift:"name,1" db:"name" json:"name"`
}

func NewMyStructNestedAnnotation() *MyStructNestedAnnotation {
  return &MyStructNestedAnnotation{}
}


func (p *MyStructNestedAnnotation) GetName() string {
  return p.Name
}
func (p *MyStructNestedAnnotation) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyStructNestedAnnotation)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  p.Name = v
}
  return nil
}

func (p *MyStructNestedAnnotation) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("MyStructNestedAnnotation"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyStructNestedAnnotation) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:name: ", p), err) }
  if err := oprot.WriteString(string(p.Name)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.name (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:name: ", p), err) }
  return err
}

func (p *MyStructNestedAnnotation) String() string {
  if p == nil {
    return "<nil>"
  }

  nameVal := fmt.Sprintf("%v", p.Name)
  return fmt.Sprintf("MyStructNestedAnnotation({Name:%s})", nameVal)
}

// Attributes:
//  - Count
//  - Name
//  - Extra
//  - Nest
type MyStructAnnotation struct {
  Count int64 `thrift:"count,1" db:"count" json:"count"`
  Name string `thrift:"name,2" db:"name" json:"name"`
  Extra *string `thrift:"extra,3" db:"extra" json:"extra,omitempty"`
  Nest *MyStructNestedAnnotation `thrift:"nest,4" db:"nest" json:"nest"`
}

func NewMyStructAnnotation() *MyStructAnnotation {
  return &MyStructAnnotation{
Nest: NewMyStructNestedAnnotation(),
}
}


func (p *MyStructAnnotation) GetCount() int64 {
  return p.Count
}

func (p *MyStructAnnotation) GetName() string {
  return p.Name
}
var MyStructAnnotation_Extra_DEFAULT string
func (p *MyStructAnnotation) GetExtra() string {
  if !p.IsSetExtra() {
    return MyStructAnnotation_Extra_DEFAULT
  }
return *p.Extra
}
var MyStructAnnotation_Nest_DEFAULT *MyStructNestedAnnotation
func (p *MyStructAnnotation) GetNest() *MyStructNestedAnnotation {
  if !p.IsSetNest() {
    return MyStructAnnotation_Nest_DEFAULT
  }
return p.Nest
}
func (p *MyStructAnnotation) IsSetExtra() bool {
  return p != nil && p.Extra != nil
}

func (p *MyStructAnnotation) IsSetNest() bool {
  return p != nil && p.Nest != nil
}

func (p *MyStructAnnotation) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    case 3:
      if err := p.ReadField3(iprot); err != nil {
        return err
      }
    case 4:
      if err := p.ReadField4(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyStructAnnotation)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI64(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  p.Count = v
}
  return nil
}

func (p *MyStructAnnotation)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 2: ", err)
} else {
  p.Name = v
}
  return nil
}

func (p *MyStructAnnotation)  ReadField3(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 3: ", err)
} else {
  p.Extra = &v
}
  return nil
}

func (p *MyStructAnnotation)  ReadField4(iprot thrift.Protocol) error {
  p.Nest = NewMyStructNestedAnnotation()
  if err := p.Nest.Read(iprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", p.Nest), err)
  }
  return nil
}

func (p *MyStructAnnotation) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("MyStructAnnotation"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := p.writeField3(oprot); err != nil { return err }
  if err := p.writeField4(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyStructAnnotation) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("count", thrift.I64, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:count: ", p), err) }
  if err := oprot.WriteI64(int64(p.Count)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.count (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:count: ", p), err) }
  return err
}

func (p *MyStructAnnotation) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("name", thrift.STRING, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:name: ", p), err) }
  if err := oprot.WriteString(string(p.Name)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.name (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:name: ", p), err) }
  return err
}

func (p *MyStructAnnotation) writeField3(oprot thrift.Protocol) (err error) {
  if p.IsSetExtra() {
    if err := oprot.WriteFieldBegin("extra", thrift.STRING, 3); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 3:extra: ", p), err) }
    if err := oprot.WriteString(string(*p.Extra)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T.extra (3) field write error: ", p), err) }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 3:extra: ", p), err) }
  }
  return err
}

func (p *MyStructAnnotation) writeField4(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("nest", thrift.STRUCT, 4); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 4:nest: ", p), err) }
  if err := p.Nest.Write(oprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", p.Nest), err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 4:nest: ", p), err) }
  return err
}

func (p *MyStructAnnotation) String() string {
  if p == nil {
    return "<nil>"
  }

  countVal := fmt.Sprintf("%v", p.Count)
  nameVal := fmt.Sprintf("%v", p.Name)
  var extraVal string
  if p.Extra == nil {
    extraVal = "<nil>"
  } else {
    extraVal = fmt.Sprintf("%v", *p.Extra)
  }
  var nestVal string
  if p.Nest == nil {
    nestVal = "<nil>"
  } else {
    nestVal = fmt.Sprintf("%v", p.Nest)
  }
  return fmt.Sprintf("MyStructAnnotation({Count:%s Name:%s Extra:%s Nest:%s})", countVal, nameVal, extraVal, nestVal)
}

// Attributes:
//  - Major
//  - Package
//  - AnnotationWithQuote
//  - Class_
//  - AnnotationWithTrailingComma
//  - EmptyAnnotations
type MyStruct struct {
  Major int64 `thrift:"major,1" db:"major" json:"major"`
  Package string `thrift:"package,2" db:"package" json:"package"`
  AnnotationWithQuote string `thrift:"annotation_with_quote,3" tag:"somevalue"`
  Class_ string `thrift:"class_,4" db:"class_" json:"class_"`
  AnnotationWithTrailingComma string `thrift:"annotation_with_trailing_comma,5" db:"annotation_with_trailing_comma" json:"annotation_with_trailing_comma"`
  EmptyAnnotations string `thrift:"empty_annotations,6" db:"empty_annotations" json:"empty_annotations"`
}

func NewMyStruct() *MyStruct {
  return &MyStruct{}
}


func (p *MyStruct) GetMajor() int64 {
  return p.Major
}

func (p *MyStruct) GetPackage() string {
  return p.Package
}

func (p *MyStruct) GetAnnotationWithQuote() string {
  return p.AnnotationWithQuote
}

func (p *MyStruct) GetClass_() string {
  return p.Class_
}

func (p *MyStruct) GetAnnotationWithTrailingComma() string {
  return p.AnnotationWithTrailingComma
}

func (p *MyStruct) GetEmptyAnnotations() string {
  return p.EmptyAnnotations
}
func (p *MyStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    case 3:
      if err := p.ReadField3(iprot); err != nil {
        return err
      }
    case 4:
      if err := p.ReadField4(iprot); err != nil {
        return err
      }
    case 5:
      if err := p.ReadField5(iprot); err != nil {
        return err
      }
    case 6:
      if err := p.ReadField6(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyStruct)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI64(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  p.Major = v
}
  return nil
}

func (p *MyStruct)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 2: ", err)
} else {
  p.Package = v
}
  return nil
}

func (p *MyStruct)  ReadField3(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 3: ", err)
} else {
  p.AnnotationWithQuote = v
}
  return nil
}

func (p *MyStruct)  ReadField4(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 4: ", err)
} else {
  p.Class_ = v
}
  return nil
}

func (p *MyStruct)  ReadField5(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 5: ", err)
} else {
  p.AnnotationWithTrailingComma = v
}
  return nil
}

func (p *MyStruct)  ReadField6(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 6: ", err)
} else {
  p.EmptyAnnotations = v
}
  return nil
}

func (p *MyStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("MyStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := p.writeField3(oprot); err != nil { return err }
  if err := p.writeField4(oprot); err != nil { return err }
  if err := p.writeField5(oprot); err != nil { return err }
  if err := p.writeField6(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyStruct) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("major", thrift.I64, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:major: ", p), err) }
  if err := oprot.WriteI64(int64(p.Major)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.major (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:major: ", p), err) }
  return err
}

func (p *MyStruct) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("package", thrift.STRING, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:package: ", p), err) }
  if err := oprot.WriteString(string(p.Package)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.package (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:package: ", p), err) }
  return err
}

func (p *MyStruct) writeField3(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("annotation_with_quote", thrift.STRING, 3); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 3:annotation_with_quote: ", p), err) }
  if err := oprot.WriteString(string(p.AnnotationWithQuote)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.annotation_with_quote (3) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 3:annotation_with_quote: ", p), err) }
  return err
}

func (p *MyStruct) writeField4(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("class_", thrift.STRING, 4); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 4:class_: ", p), err) }
  if err := oprot.WriteString(string(p.Class_)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.class_ (4) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 4:class_: ", p), err) }
  return err
}

func (p *MyStruct) writeField5(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("annotation_with_trailing_comma", thrift.STRING, 5); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 5:annotation_with_trailing_comma: ", p), err) }
  if err := oprot.WriteString(string(p.AnnotationWithTrailingComma)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.annotation_with_trailing_comma (5) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 5:annotation_with_trailing_comma: ", p), err) }
  return err
}

func (p *MyStruct) writeField6(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("empty_annotations", thrift.STRING, 6); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 6:empty_annotations: ", p), err) }
  if err := oprot.WriteString(string(p.EmptyAnnotations)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.empty_annotations (6) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 6:empty_annotations: ", p), err) }
  return err
}

func (p *MyStruct) String() string {
  if p == nil {
    return "<nil>"
  }

  majorVal := fmt.Sprintf("%v", p.Major)
  packageVal := fmt.Sprintf("%v", p.Package)
  annotationWithQuoteVal := fmt.Sprintf("%v", p.AnnotationWithQuote)
  class_Val := fmt.Sprintf("%v", p.Class_)
  annotationWithTrailingCommaVal := fmt.Sprintf("%v", p.AnnotationWithTrailingComma)
  emptyAnnotationsVal := fmt.Sprintf("%v", p.EmptyAnnotations)
  return fmt.Sprintf("MyStruct({Major:%s Package:%s AnnotationWithQuote:%s Class_:%s AnnotationWithTrailingComma:%s EmptyAnnotations:%s})", majorVal, packageVal, annotationWithQuoteVal, class_Val, annotationWithTrailingCommaVal, emptyAnnotationsVal)
}

// Attributes:
//  - Id
//  - Password
type SecretStruct struct {
  Id int64 `thrift:"id,1" db:"id" json:"id"`
  Password string `thrift:"password,2" db:"password" json:"password"`
}

func NewSecretStruct() *SecretStruct {
  return &SecretStruct{}
}


func (p *SecretStruct) GetId() int64 {
  return p.Id
}

func (p *SecretStruct) GetPassword() string {
  return p.Password
}
func (p *SecretStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *SecretStruct)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI64(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  p.Id = v
}
  return nil
}

func (p *SecretStruct)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 2: ", err)
} else {
  p.Password = v
}
  return nil
}

func (p *SecretStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("SecretStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *SecretStruct) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("id", thrift.I64, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:id: ", p), err) }
  if err := oprot.WriteI64(int64(p.Id)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.id (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:id: ", p), err) }
  return err
}

func (p *SecretStruct) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("password", thrift.STRING, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:password: ", p), err) }
  if err := oprot.WriteString(string(p.Password)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.password (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:password: ", p), err) }
  return err
}

func (p *SecretStruct) String() string {
  if p == nil {
    return "<nil>"
  }

  idVal := fmt.Sprintf("%v", p.Id)
  passwordVal := fmt.Sprintf("%v", p.Password)
  return fmt.Sprintf("SecretStruct({Id:%s Password:%s})", idVal, passwordVal)
}

