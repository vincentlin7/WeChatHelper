// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SKBuiltinString_t.proto

#ifndef PROTOBUF_SKBuiltinString_5ft_2eproto__INCLUDED
#define PROTOBUF_SKBuiltinString_5ft_2eproto__INCLUDED

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
class SKBuiltinString_t;
class SKBuiltinString_tDefaultTypeInternal;
extern SKBuiltinString_tDefaultTypeInternal _SKBuiltinString_t_default_instance_;
}  // namespace micromsg
}  // namespace MMPro

namespace MMPro {
namespace micromsg {

namespace protobuf_SKBuiltinString_5ft_2eproto {
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
}  // namespace protobuf_SKBuiltinString_5ft_2eproto

// ===================================================================

class SKBuiltinString_t : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MMPro.micromsg.SKBuiltinString_t) */ {
 public:
  SKBuiltinString_t();
  virtual ~SKBuiltinString_t();

  SKBuiltinString_t(const SKBuiltinString_t& from);

  inline SKBuiltinString_t& operator=(const SKBuiltinString_t& from) {
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
  static const SKBuiltinString_t& default_instance();

  static inline const SKBuiltinString_t* internal_default_instance() {
    return reinterpret_cast<const SKBuiltinString_t*>(
               &_SKBuiltinString_t_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SKBuiltinString_t* other);

  // implements Message ----------------------------------------------

  inline SKBuiltinString_t* New() const PROTOBUF_FINAL { return New(NULL); }

  SKBuiltinString_t* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SKBuiltinString_t& from);
  void MergeFrom(const SKBuiltinString_t& from);
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
  void InternalSwap(SKBuiltinString_t* other);
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

  // optional string _String = 1;
  bool has__string() const;
  void clear__string();
  static const int kStringFieldNumber = 1;
  const ::std::string& _string() const;
  void set__string(const ::std::string& value);
  #if LANG_CXX11
  void set__string(::std::string&& value);
  #endif
  void set__string(const char* value);
  void set__string(const char* value, size_t size);
  ::std::string* mutable__string();
  ::std::string* release__string();
  void set_allocated__string(::std::string* _string);

  // @@protoc_insertion_point(class_scope:MMPro.micromsg.SKBuiltinString_t)
 private:
  void set_has__string();
  void clear_has__string();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr _string_;
  friend struct protobuf_SKBuiltinString_5ft_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SKBuiltinString_t

// optional string _String = 1;
inline bool SKBuiltinString_t::has__string() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SKBuiltinString_t::set_has__string() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SKBuiltinString_t::clear_has__string() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SKBuiltinString_t::clear__string() {
  _string_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has__string();
}
inline const ::std::string& SKBuiltinString_t::_string() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SKBuiltinString_t._String)
  return _string_.GetNoArena();
}
inline void SKBuiltinString_t::set__string(const ::std::string& value) {
  set_has__string();
  _string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SKBuiltinString_t._String)
}
#if LANG_CXX11
inline void SKBuiltinString_t::set__string(::std::string&& value) {
  set_has__string();
  _string_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MMPro.micromsg.SKBuiltinString_t._String)
}
#endif
inline void SKBuiltinString_t::set__string(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has__string();
  _string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MMPro.micromsg.SKBuiltinString_t._String)
}
inline void SKBuiltinString_t::set__string(const char* value, size_t size) {
  set_has__string();
  _string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MMPro.micromsg.SKBuiltinString_t._String)
}
inline ::std::string* SKBuiltinString_t::mutable__string() {
  set_has__string();
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SKBuiltinString_t._String)
  return _string_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SKBuiltinString_t::release__string() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.SKBuiltinString_t._String)
  clear_has__string();
  return _string_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SKBuiltinString_t::set_allocated__string(::std::string* _string) {
  if (_string != NULL) {
    set_has__string();
  } else {
    clear_has__string();
  }
  _string_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), _string);
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.SKBuiltinString_t._String)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace micromsg
}  // namespace MMPro

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SKBuiltinString_5ft_2eproto__INCLUDED
