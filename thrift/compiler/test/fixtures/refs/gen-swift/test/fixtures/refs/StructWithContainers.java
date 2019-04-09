/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.refs;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftStruct("StructWithContainers")
public final class StructWithContainers {
    @ThriftConstructor
    public StructWithContainers(
        @ThriftField(value=1, name="list_ref", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref", value = "true"), @ThriftIdlAnnotation(key = "cpp2.ref", value = "true") }) final List<Integer> listRef,
        @ThriftField(value=2, name="set_ref", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref", value = "true"), @ThriftIdlAnnotation(key = "cpp2.ref", value = "true") }) final Set<Integer> setRef,
        @ThriftField(value=3, name="map_ref", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref", value = "true"), @ThriftIdlAnnotation(key = "cpp2.ref", value = "true") }) final Map<Integer, Integer> mapRef,
        @ThriftField(value=4, name="list_ref_unique", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref_type", value = "unique"), @ThriftIdlAnnotation(key = "cpp2.ref_type", value = "unique") }) final List<Integer> listRefUnique,
        @ThriftField(value=5, name="set_ref_shared", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref_type", value = "shared"), @ThriftIdlAnnotation(key = "cpp2.ref_type", value = "shared") }) final Set<Integer> setRefShared,
        @ThriftField(value=6, name="list_ref_shared_const", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref_type", value = "shared_const"), @ThriftIdlAnnotation(key = "cpp2.ref_type", value = "shared_const") }) final List<Integer> listRefSharedConst
    ) {
        this.listRef = listRef;
        this.setRef = setRef;
        this.mapRef = mapRef;
        this.listRefUnique = listRefUnique;
        this.setRefShared = setRefShared;
        this.listRefSharedConst = listRefSharedConst;
    }
    
    protected StructWithContainers() {
      this.listRef = null;
      this.setRef = null;
      this.mapRef = null;
      this.listRefUnique = null;
      this.setRefShared = null;
      this.listRefSharedConst = null;
    }
    
    public static class Builder {
        private List<Integer> listRef;
    
        public Builder setListRef(List<Integer> listRef) {
            this.listRef = listRef;
            return this;
        }
        private Set<Integer> setRef;
    
        public Builder setSetRef(Set<Integer> setRef) {
            this.setRef = setRef;
            return this;
        }
        private Map<Integer, Integer> mapRef;
    
        public Builder setMapRef(Map<Integer, Integer> mapRef) {
            this.mapRef = mapRef;
            return this;
        }
        private List<Integer> listRefUnique;
    
        public Builder setListRefUnique(List<Integer> listRefUnique) {
            this.listRefUnique = listRefUnique;
            return this;
        }
        private Set<Integer> setRefShared;
    
        public Builder setSetRefShared(Set<Integer> setRefShared) {
            this.setRefShared = setRefShared;
            return this;
        }
        private List<Integer> listRefSharedConst;
    
        public Builder setListRefSharedConst(List<Integer> listRefSharedConst) {
            this.listRefSharedConst = listRefSharedConst;
            return this;
        }
    
        public Builder() { }
        public Builder(StructWithContainers other) {
            this.listRef = other.listRef;
            this.setRef = other.setRef;
            this.mapRef = other.mapRef;
            this.listRefUnique = other.listRefUnique;
            this.setRefShared = other.setRefShared;
            this.listRefSharedConst = other.listRefSharedConst;
        }
    
        public StructWithContainers build() {
            return new StructWithContainers (
                this.listRef,
                this.setRef,
                this.mapRef,
                this.listRefUnique,
                this.setRefShared,
                this.listRefSharedConst
            );
        }
    }
    
    private final List<Integer> listRef;
    private final Set<Integer> setRef;
    private final Map<Integer, Integer> mapRef;
    private final List<Integer> listRefUnique;
    private final Set<Integer> setRefShared;
    private final List<Integer> listRefSharedConst;

    
    @ThriftField(value=1, name="list_ref", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref", value = "true"), @ThriftIdlAnnotation(key = "cpp2.ref", value = "true") })
    public List<Integer> getListRef() { return listRef; }
        
    @ThriftField(value=2, name="set_ref", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref", value = "true"), @ThriftIdlAnnotation(key = "cpp2.ref", value = "true") })
    public Set<Integer> getSetRef() { return setRef; }
        
    @ThriftField(value=3, name="map_ref", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref", value = "true"), @ThriftIdlAnnotation(key = "cpp2.ref", value = "true") })
    public Map<Integer, Integer> getMapRef() { return mapRef; }
        
    @ThriftField(value=4, name="list_ref_unique", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref_type", value = "unique"), @ThriftIdlAnnotation(key = "cpp2.ref_type", value = "unique") })
    public List<Integer> getListRefUnique() { return listRefUnique; }
        
    @ThriftField(value=5, name="set_ref_shared", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref_type", value = "shared"), @ThriftIdlAnnotation(key = "cpp2.ref_type", value = "shared") })
    public Set<Integer> getSetRefShared() { return setRefShared; }
        
    @ThriftField(value=6, name="list_ref_shared_const", requiredness=Requiredness.NONE, idlAnnotations = { @ThriftIdlAnnotation(key = "cpp.ref_type", value = "shared_const"), @ThriftIdlAnnotation(key = "cpp2.ref_type", value = "shared_const") })
    public List<Integer> getListRefSharedConst() { return listRefSharedConst; }
    
    @Override
    public String toString() {
        return toStringHelper(this)
            .add("listRef", listRef)
            .add("setRef", setRef)
            .add("mapRef", mapRef)
            .add("listRefUnique", listRefUnique)
            .add("setRefShared", setRefShared)
            .add("listRefSharedConst", listRefSharedConst)
            .toString();
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        StructWithContainers other = (StructWithContainers)o;
    
        return
            Objects.equals(listRef, other.listRef) &&
            Objects.equals(setRef, other.setRef) &&
            Objects.equals(mapRef, other.mapRef) &&
            Objects.equals(listRefUnique, other.listRefUnique) &&
            Objects.equals(setRefShared, other.setRefShared) &&
            Objects.equals(listRefSharedConst, other.listRefSharedConst) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            listRef,
            setRef,
            mapRef,
            listRefUnique,
            setRefShared,
            listRefSharedConst
        });
    }
    
}
