// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/ground_truth/proto/relations.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto;
namespace cartographer {
namespace ground_truth {
namespace proto {
class GroundTruth;
class GroundTruthDefaultTypeInternal;
extern GroundTruthDefaultTypeInternal _GroundTruth_default_instance_;
class Relation;
class RelationDefaultTypeInternal;
extern RelationDefaultTypeInternal _Relation_default_instance_;
}  // namespace proto
}  // namespace ground_truth
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::ground_truth::proto::GroundTruth* Arena::CreateMaybeMessage<::cartographer::ground_truth::proto::GroundTruth>(Arena*);
template<> ::cartographer::ground_truth::proto::Relation* Arena::CreateMaybeMessage<::cartographer::ground_truth::proto::Relation>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace ground_truth {
namespace proto {

// ===================================================================

class Relation :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.ground_truth.proto.Relation) */ {
 public:
  Relation();
  virtual ~Relation();

  Relation(const Relation& from);
  Relation(Relation&& from) noexcept
    : Relation() {
    *this = ::std::move(from);
  }

  inline Relation& operator=(const Relation& from) {
    CopyFrom(from);
    return *this;
  }
  inline Relation& operator=(Relation&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Relation& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Relation* internal_default_instance() {
    return reinterpret_cast<const Relation*>(
               &_Relation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Relation& a, Relation& b) {
    a.Swap(&b);
  }
  inline void Swap(Relation* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Relation* New() const final {
    return CreateMaybeMessage<Relation>(nullptr);
  }

  Relation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Relation>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Relation& from);
  void MergeFrom(const Relation& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Relation* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.ground_truth.proto.Relation";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto);
    return ::descriptor_table_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kExpectedFieldNumber = 3,
    kTimestamp1FieldNumber = 1,
    kTimestamp2FieldNumber = 2,
    kCoveredDistanceFieldNumber = 4,
  };
  // .cartographer.transform.proto.Rigid3d expected = 3;
  bool has_expected() const;
  private:
  bool _internal_has_expected() const;
  public:
  void clear_expected();
  const ::cartographer::transform::proto::Rigid3d& expected() const;
  ::cartographer::transform::proto::Rigid3d* release_expected();
  ::cartographer::transform::proto::Rigid3d* mutable_expected();
  void set_allocated_expected(::cartographer::transform::proto::Rigid3d* expected);
  private:
  const ::cartographer::transform::proto::Rigid3d& _internal_expected() const;
  ::cartographer::transform::proto::Rigid3d* _internal_mutable_expected();
  public:

  // int64 timestamp1 = 1;
  void clear_timestamp1();
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp1() const;
  void set_timestamp1(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_timestamp1() const;
  void _internal_set_timestamp1(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 timestamp2 = 2;
  void clear_timestamp2();
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp2() const;
  void set_timestamp2(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_timestamp2() const;
  void _internal_set_timestamp2(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // double covered_distance = 4;
  void clear_covered_distance();
  double covered_distance() const;
  void set_covered_distance(double value);
  private:
  double _internal_covered_distance() const;
  void _internal_set_covered_distance(double value);
  public:

  // @@protoc_insertion_point(class_scope:cartographer.ground_truth.proto.Relation)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::transform::proto::Rigid3d* expected_;
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp1_;
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp2_;
  double covered_distance_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto;
};
// -------------------------------------------------------------------

class GroundTruth :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.ground_truth.proto.GroundTruth) */ {
 public:
  GroundTruth();
  virtual ~GroundTruth();

  GroundTruth(const GroundTruth& from);
  GroundTruth(GroundTruth&& from) noexcept
    : GroundTruth() {
    *this = ::std::move(from);
  }

  inline GroundTruth& operator=(const GroundTruth& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroundTruth& operator=(GroundTruth&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GroundTruth& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GroundTruth* internal_default_instance() {
    return reinterpret_cast<const GroundTruth*>(
               &_GroundTruth_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GroundTruth& a, GroundTruth& b) {
    a.Swap(&b);
  }
  inline void Swap(GroundTruth* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GroundTruth* New() const final {
    return CreateMaybeMessage<GroundTruth>(nullptr);
  }

  GroundTruth* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GroundTruth>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GroundTruth& from);
  void MergeFrom(const GroundTruth& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GroundTruth* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.ground_truth.proto.GroundTruth";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto);
    return ::descriptor_table_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRelationFieldNumber = 1,
  };
  // repeated .cartographer.ground_truth.proto.Relation relation = 1;
  int relation_size() const;
  private:
  int _internal_relation_size() const;
  public:
  void clear_relation();
  ::cartographer::ground_truth::proto::Relation* mutable_relation(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >*
      mutable_relation();
  private:
  const ::cartographer::ground_truth::proto::Relation& _internal_relation(int index) const;
  ::cartographer::ground_truth::proto::Relation* _internal_add_relation();
  public:
  const ::cartographer::ground_truth::proto::Relation& relation(int index) const;
  ::cartographer::ground_truth::proto::Relation* add_relation();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >&
      relation() const;

  // @@protoc_insertion_point(class_scope:cartographer.ground_truth.proto.GroundTruth)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation > relation_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Relation

// int64 timestamp1 = 1;
inline void Relation::clear_timestamp1() {
  timestamp1_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Relation::_internal_timestamp1() const {
  return timestamp1_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Relation::timestamp1() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.timestamp1)
  return _internal_timestamp1();
}
inline void Relation::_internal_set_timestamp1(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  timestamp1_ = value;
}
inline void Relation::set_timestamp1(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_timestamp1(value);
  // @@protoc_insertion_point(field_set:cartographer.ground_truth.proto.Relation.timestamp1)
}

// int64 timestamp2 = 2;
inline void Relation::clear_timestamp2() {
  timestamp2_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Relation::_internal_timestamp2() const {
  return timestamp2_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Relation::timestamp2() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.timestamp2)
  return _internal_timestamp2();
}
inline void Relation::_internal_set_timestamp2(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  timestamp2_ = value;
}
inline void Relation::set_timestamp2(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_timestamp2(value);
  // @@protoc_insertion_point(field_set:cartographer.ground_truth.proto.Relation.timestamp2)
}

// .cartographer.transform.proto.Rigid3d expected = 3;
inline bool Relation::_internal_has_expected() const {
  return this != internal_default_instance() && expected_ != nullptr;
}
inline bool Relation::has_expected() const {
  return _internal_has_expected();
}
inline const ::cartographer::transform::proto::Rigid3d& Relation::_internal_expected() const {
  const ::cartographer::transform::proto::Rigid3d* p = expected_;
  return p != nullptr ? *p : *reinterpret_cast<const ::cartographer::transform::proto::Rigid3d*>(
      &::cartographer::transform::proto::_Rigid3d_default_instance_);
}
inline const ::cartographer::transform::proto::Rigid3d& Relation::expected() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.expected)
  return _internal_expected();
}
inline ::cartographer::transform::proto::Rigid3d* Relation::release_expected() {
  // @@protoc_insertion_point(field_release:cartographer.ground_truth.proto.Relation.expected)
  
  ::cartographer::transform::proto::Rigid3d* temp = expected_;
  expected_ = nullptr;
  return temp;
}
inline ::cartographer::transform::proto::Rigid3d* Relation::_internal_mutable_expected() {
  
  if (expected_ == nullptr) {
    auto* p = CreateMaybeMessage<::cartographer::transform::proto::Rigid3d>(GetArenaNoVirtual());
    expected_ = p;
  }
  return expected_;
}
inline ::cartographer::transform::proto::Rigid3d* Relation::mutable_expected() {
  // @@protoc_insertion_point(field_mutable:cartographer.ground_truth.proto.Relation.expected)
  return _internal_mutable_expected();
}
inline void Relation::set_allocated_expected(::cartographer::transform::proto::Rigid3d* expected) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(expected_);
  }
  if (expected) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      expected = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, expected, submessage_arena);
    }
    
  } else {
    
  }
  expected_ = expected;
  // @@protoc_insertion_point(field_set_allocated:cartographer.ground_truth.proto.Relation.expected)
}

// double covered_distance = 4;
inline void Relation::clear_covered_distance() {
  covered_distance_ = 0;
}
inline double Relation::_internal_covered_distance() const {
  return covered_distance_;
}
inline double Relation::covered_distance() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.covered_distance)
  return _internal_covered_distance();
}
inline void Relation::_internal_set_covered_distance(double value) {
  
  covered_distance_ = value;
}
inline void Relation::set_covered_distance(double value) {
  _internal_set_covered_distance(value);
  // @@protoc_insertion_point(field_set:cartographer.ground_truth.proto.Relation.covered_distance)
}

// -------------------------------------------------------------------

// GroundTruth

// repeated .cartographer.ground_truth.proto.Relation relation = 1;
inline int GroundTruth::_internal_relation_size() const {
  return relation_.size();
}
inline int GroundTruth::relation_size() const {
  return _internal_relation_size();
}
inline void GroundTruth::clear_relation() {
  relation_.Clear();
}
inline ::cartographer::ground_truth::proto::Relation* GroundTruth::mutable_relation(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >*
GroundTruth::mutable_relation() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.ground_truth.proto.GroundTruth.relation)
  return &relation_;
}
inline const ::cartographer::ground_truth::proto::Relation& GroundTruth::_internal_relation(int index) const {
  return relation_.Get(index);
}
inline const ::cartographer::ground_truth::proto::Relation& GroundTruth::relation(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.GroundTruth.relation)
  return _internal_relation(index);
}
inline ::cartographer::ground_truth::proto::Relation* GroundTruth::_internal_add_relation() {
  return relation_.Add();
}
inline ::cartographer::ground_truth::proto::Relation* GroundTruth::add_relation() {
  // @@protoc_insertion_point(field_add:cartographer.ground_truth.proto.GroundTruth.relation)
  return _internal_add_relation();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >&
GroundTruth::relation() const {
  // @@protoc_insertion_point(field_list:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace ground_truth
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto
