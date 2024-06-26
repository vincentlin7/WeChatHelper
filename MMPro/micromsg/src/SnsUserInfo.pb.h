// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SnsUserInfo.proto

#ifndef PROTOBUF_SnsUserInfo_2eproto__INCLUDED
#define PROTOBUF_SnsUserInfo_2eproto__INCLUDED

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
class SnsUserInfo;
class SnsUserInfoDefaultTypeInternal;
extern SnsUserInfoDefaultTypeInternal _SnsUserInfo_default_instance_;
}  // namespace micromsg
}  // namespace MMPro

namespace MMPro {
namespace micromsg {

namespace protobuf_SnsUserInfo_2eproto {
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
}  // namespace protobuf_SnsUserInfo_2eproto

// ===================================================================

class SnsUserInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MMPro.micromsg.SnsUserInfo) */ {
 public:
  SnsUserInfo();
  virtual ~SnsUserInfo();

  SnsUserInfo(const SnsUserInfo& from);

  inline SnsUserInfo& operator=(const SnsUserInfo& from) {
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
  static const SnsUserInfo& default_instance();

  static inline const SnsUserInfo* internal_default_instance() {
    return reinterpret_cast<const SnsUserInfo*>(
               &_SnsUserInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SnsUserInfo* other);

  // implements Message ----------------------------------------------

  inline SnsUserInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  SnsUserInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SnsUserInfo& from);
  void MergeFrom(const SnsUserInfo& from);
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
  void InternalSwap(SnsUserInfo* other);
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

  // optional string _SnsBGImgID = 2;
  bool has__snsbgimgid() const;
  void clear__snsbgimgid();
  static const int kSnsBGImgIDFieldNumber = 2;
  const ::std::string& _snsbgimgid() const;
  void set__snsbgimgid(const ::std::string& value);
  #if LANG_CXX11
  void set__snsbgimgid(::std::string&& value);
  #endif
  void set__snsbgimgid(const char* value);
  void set__snsbgimgid(const char* value, size_t size);
  ::std::string* mutable__snsbgimgid();
  ::std::string* release__snsbgimgid();
  void set_allocated__snsbgimgid(::std::string* _snsbgimgid);

  // required uint32 _SnsFlag = 1;
  bool has__snsflag() const;
  void clear__snsflag();
  static const int kSnsFlagFieldNumber = 1;
  ::google::protobuf::uint32 _snsflag() const;
  void set__snsflag(::google::protobuf::uint32 value);

  // optional uint32 _SnsFlagEx = 4;
  bool has__snsflagex() const;
  void clear__snsflagex();
  static const int kSnsFlagExFieldNumber = 4;
  ::google::protobuf::uint32 _snsflagex() const;
  void set__snsflagex(::google::protobuf::uint32 value);

  // optional uint64 _SnsBGObjectID = 3;
  bool has__snsbgobjectid() const;
  void clear__snsbgobjectid();
  static const int kSnsBGObjectIDFieldNumber = 3;
  ::google::protobuf::uint64 _snsbgobjectid() const;
  void set__snsbgobjectid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:MMPro.micromsg.SnsUserInfo)
 private:
  void set_has__snsflag();
  void clear_has__snsflag();
  void set_has__snsbgimgid();
  void clear_has__snsbgimgid();
  void set_has__snsbgobjectid();
  void clear_has__snsbgobjectid();
  void set_has__snsflagex();
  void clear_has__snsflagex();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr _snsbgimgid_;
  ::google::protobuf::uint32 _snsflag_;
  ::google::protobuf::uint32 _snsflagex_;
  ::google::protobuf::uint64 _snsbgobjectid_;
  friend struct protobuf_SnsUserInfo_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SnsUserInfo

// required uint32 _SnsFlag = 1;
inline bool SnsUserInfo::has__snsflag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SnsUserInfo::set_has__snsflag() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SnsUserInfo::clear_has__snsflag() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SnsUserInfo::clear__snsflag() {
  _snsflag_ = 0u;
  clear_has__snsflag();
}
inline ::google::protobuf::uint32 SnsUserInfo::_snsflag() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsUserInfo._SnsFlag)
  return _snsflag_;
}
inline void SnsUserInfo::set__snsflag(::google::protobuf::uint32 value) {
  set_has__snsflag();
  _snsflag_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsUserInfo._SnsFlag)
}

// optional string _SnsBGImgID = 2;
inline bool SnsUserInfo::has__snsbgimgid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SnsUserInfo::set_has__snsbgimgid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SnsUserInfo::clear_has__snsbgimgid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SnsUserInfo::clear__snsbgimgid() {
  _snsbgimgid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has__snsbgimgid();
}
inline const ::std::string& SnsUserInfo::_snsbgimgid() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsUserInfo._SnsBGImgID)
  return _snsbgimgid_.GetNoArena();
}
inline void SnsUserInfo::set__snsbgimgid(const ::std::string& value) {
  set_has__snsbgimgid();
  _snsbgimgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsUserInfo._SnsBGImgID)
}
#if LANG_CXX11
inline void SnsUserInfo::set__snsbgimgid(::std::string&& value) {
  set_has__snsbgimgid();
  _snsbgimgid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MMPro.micromsg.SnsUserInfo._SnsBGImgID)
}
#endif
inline void SnsUserInfo::set__snsbgimgid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has__snsbgimgid();
  _snsbgimgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MMPro.micromsg.SnsUserInfo._SnsBGImgID)
}
inline void SnsUserInfo::set__snsbgimgid(const char* value, size_t size) {
  set_has__snsbgimgid();
  _snsbgimgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MMPro.micromsg.SnsUserInfo._SnsBGImgID)
}
inline ::std::string* SnsUserInfo::mutable__snsbgimgid() {
  set_has__snsbgimgid();
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.SnsUserInfo._SnsBGImgID)
  return _snsbgimgid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SnsUserInfo::release__snsbgimgid() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.SnsUserInfo._SnsBGImgID)
  clear_has__snsbgimgid();
  return _snsbgimgid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SnsUserInfo::set_allocated__snsbgimgid(::std::string* _snsbgimgid) {
  if (_snsbgimgid != NULL) {
    set_has__snsbgimgid();
  } else {
    clear_has__snsbgimgid();
  }
  _snsbgimgid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), _snsbgimgid);
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.SnsUserInfo._SnsBGImgID)
}

// optional uint64 _SnsBGObjectID = 3;
inline bool SnsUserInfo::has__snsbgobjectid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SnsUserInfo::set_has__snsbgobjectid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SnsUserInfo::clear_has__snsbgobjectid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SnsUserInfo::clear__snsbgobjectid() {
  _snsbgobjectid_ = GOOGLE_ULONGLONG(0);
  clear_has__snsbgobjectid();
}
inline ::google::protobuf::uint64 SnsUserInfo::_snsbgobjectid() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsUserInfo._SnsBGObjectID)
  return _snsbgobjectid_;
}
inline void SnsUserInfo::set__snsbgobjectid(::google::protobuf::uint64 value) {
  set_has__snsbgobjectid();
  _snsbgobjectid_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsUserInfo._SnsBGObjectID)
}

// optional uint32 _SnsFlagEx = 4;
inline bool SnsUserInfo::has__snsflagex() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SnsUserInfo::set_has__snsflagex() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SnsUserInfo::clear_has__snsflagex() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SnsUserInfo::clear__snsflagex() {
  _snsflagex_ = 0u;
  clear_has__snsflagex();
}
inline ::google::protobuf::uint32 SnsUserInfo::_snsflagex() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.SnsUserInfo._SnsFlagEx)
  return _snsflagex_;
}
inline void SnsUserInfo::set__snsflagex(::google::protobuf::uint32 value) {
  set_has__snsflagex();
  _snsflagex_ = value;
  // @@protoc_insertion_point(field_set:MMPro.micromsg.SnsUserInfo._SnsFlagEx)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace micromsg
}  // namespace MMPro

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SnsUserInfo_2eproto__INCLUDED
