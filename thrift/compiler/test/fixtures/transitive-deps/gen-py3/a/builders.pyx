#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cdef class A_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _a_types.A

    def __iter__(self):
        yield "b", self.b
        yield "other", self.other
