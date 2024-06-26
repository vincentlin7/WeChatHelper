// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GeneralControlBitSet.proto

#ifndef PROTOBUF_GeneralControlBitSet_2eproto__INCLUDED
#define PROTOBUF_GeneralControlBitSet_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace MMPro {
namespace micromsg {
class GeneralControlBitSet;
class GeneralControlBitSetDefaultTypeInternal;
extern GeneralControlBitSetDefaultTypeInternal _GeneralControlBitSet_default_instance_;
}  // namespace micromsg
}  // namespace MMPro

namespace MMPro {
namespace micromsg {

namespace protobuf_GeneralControlBitSet_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_GeneralControlBitSet_2eproto

// ===================================================================

class GeneralControlBitSet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MMPro.micromsg.GeneralControlBitSet) */ {
 public:
  GeneralControlBitSet();
  virtual ~GeneralControlBitSet();

  GeneralControlBitSet(const GeneralControlBitSet& from);

  inline GeneralControlBitSet& operator=(const GeneralControlBitSet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GeneralControlBitSet& default_instance();

  static inline const GeneralControlBitSet* internal_default_instance() {
    return reinterpret_cast<const GeneralControlBitSet*>(
               &_GeneralControlBitSet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(GeneralControlBitSet* other);

  // implements Message ----------------------------------------------

  inline GeneralControlBitSet* New() const PROTOBUF_FINAL { return New(NULL); }

  GeneralControlBitSet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GeneralControlBitSet& from);
  void MergeFrom(const GeneralControlBitSet& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GeneralControlBitSet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 _BitValue = 1;
  bool has__bitvalue() const;
  void clear__bitvalue();
  static const int kBitValueFieldNumber = 1;
  ::google::protobuf::uint32 _bitvalue() const;
  void set__bitvalue(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MMPro.micromsg.GeneralControlBitSet)
 private:
  void set_has__bitvalue();
  void clear_has__bitvalue();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _bitvalue_;
  friend struct protobuf_GeneralControlBitSet_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GeneralControlBitSet

// required uint32 _BitValue = 1;
inline bool GeneralControlBitSet::has__bitvalue() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GeneralControlBitSet::set_has__bitvalue() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GeneralControlBitSet::clear_has__bitvalue() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GeneralControlBitSet::clear__bitvalue() {
  _bitvalue_ = 0u;
  clear_has__bitvalue();
}
inline ::google::protobuf::uint32 GeneralControlBitSet::_bitvalue() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.GeneralControlBitSet._BitValue)
  return _bitvalue_;
}
inline void GeneralControlBitSet::set__bitvalue(::google::protobuf::uint32 value) {
  set_has__bitvalue();
  _bitvalue_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.GeneralControlBitSet._BitValue)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace micromsg
}  // namespace MMPro

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GeneralControlBitSet_2eproto__INCLUDED
