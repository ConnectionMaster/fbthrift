/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic_swift_bean;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldValueMetaData;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct("MyStruct2")
public final class MyStruct2 implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public MyStruct2() {
      this.myStruct1 = null;
      this.myString = null;
    }
    
    public static class Builder {
    
        private test.fixtures.basic_swift_bean.MyStruct1 myStruct1 = null;
        private String myString = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="myStruct1", requiredness=Requiredness.NONE)
        public Builder setMyStruct1(test.fixtures.basic_swift_bean.MyStruct1 myStruct1) {
            this.myStruct1 = myStruct1;
            return this;
        }
    
        public test.fixtures.basic_swift_bean.MyStruct1 getMyStruct1() { return myStruct1; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="myString", requiredness=Requiredness.NONE)
        public Builder setMyString(String myString) {
            this.myString = myString;
            return this;
        }
    
        public String getMyString() { return myString; }
    
        public Builder() { }
        public Builder(MyStruct2 other) {
            this.myStruct1 = other.myStruct1;
            this.myString = other.myString;
        }
    
        @ThriftConstructor
        public MyStruct2 build() {
            MyStruct2 result = new MyStruct2();
            result.myStruct1 = this.myStruct1;
            result.myString = this.myString;
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("MyStruct2");
    private test.fixtures.basic_swift_bean.MyStruct1 myStruct1;
    public static final int _MYSTRUCT1 = 1;
    private static final TField MY_STRUCT1_FIELD_DESC = new TField("myStruct1", TType.STRUCT, (short)1);
    private String myString;
    public static final int _MYSTRING = 2;
    private static final TField MY_STRING_FIELD_DESC = new TField("myString", TType.STRING, (short)2);
static {
      NAMES_TO_IDS.put("myStruct1", 1);
      FIELD_METADATA.put(1, MY_STRUCT1_FIELD_DESC);
      NAMES_TO_IDS.put("myString", 2);
      FIELD_METADATA.put(2, MY_STRING_FIELD_DESC);
    }
    
    @com.facebook.swift.codec.ThriftField(value=1, name="myStruct1", requiredness=Requiredness.NONE)
    public test.fixtures.basic_swift_bean.MyStruct1 getMyStruct1() { return myStruct1; }
    
    @com.facebook.swift.codec.ThriftField
    public MyStruct2 setMyStruct1(test.fixtures.basic_swift_bean.MyStruct1 myStruct1) {
        this.myStruct1 = myStruct1;
        return this;
    }
    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="myString", requiredness=Requiredness.NONE)
    public String getMyString() { return myString; }
    
    @com.facebook.swift.codec.ThriftField
    public MyStruct2 setMyString(String myString) {
        this.myString = myString;
        return this;
    }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("myStruct1", myStruct1);
        helper.add("myString", myString);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        MyStruct2 other = (MyStruct2)o;
    
        return
            Objects.equals(myStruct1, other.myStruct1) &&
            Objects.equals(myString, other.myString) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            myStruct1,
            myString
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<MyStruct2> asReader() {
      return MyStruct2::read0;
    }
    
    public static MyStruct2 read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(MyStruct2.NAMES_TO_IDS, MyStruct2.FIELD_METADATA);
      MyStruct2.Builder builder = new MyStruct2.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _MYSTRUCT1:
          if (__field.type == TType.STRUCT) {
            test.fixtures.basic_swift_bean.MyStruct1 myStruct1 = test.fixtures.basic_swift_bean.MyStruct1.read0(oprot);
            builder.setMyStruct1(myStruct1);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _MYSTRING:
          if (__field.type == TType.STRING) {
            String myString = oprot.readString();
            builder.setMyString(myString);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.myStruct1 != null) {
        oprot.writeFieldBegin(MY_STRUCT1_FIELD_DESC);
        this.myStruct1.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.myString != null) {
        oprot.writeFieldBegin(MY_STRING_FIELD_DESC);
        oprot.writeString(this.myString);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    

}
