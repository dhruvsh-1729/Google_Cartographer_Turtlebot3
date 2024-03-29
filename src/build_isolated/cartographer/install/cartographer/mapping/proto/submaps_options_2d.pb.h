// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/submaps_options_2d.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f2d_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f2d_2eproto

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
#include "cartographer/mapping/proto/grid_2d_options.pb.h"
#include "cartographer/mapping/proto/range_data_inserter_options.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f2d_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f2d_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f2d_2eproto;
namespace cartographer {
namespace mapping {
namespace proto {
class SubmapsOptions2D;
class SubmapsOptions2DDefaultTypeInternal;
extern SubmapsOptions2DDefaultTypeInternal _SubmapsOptions2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::mapping::proto::SubmapsOptions2D* Arena::CreateMaybeMessage<::cartographer::mapping::proto::SubmapsOptions2D>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace mapping {
namespace proto {

// ===================================================================

class SubmapsOptions2D :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.SubmapsOptions2D) */ {
 public:
  SubmapsOptions2D();
  virtual ~SubmapsOptions2D();

  SubmapsOptions2D(const SubmapsOptions2D& from);
  SubmapsOptions2D(SubmapsOptions2D&& from) noexcept
    : SubmapsOptions2D() {
    *this = ::std::move(from);
  }

  inline SubmapsOptions2D& operator=(const SubmapsOptions2D& from) {
    CopyFrom(from);
    return *this;
  }
  inline SubmapsOptions2D& operator=(SubmapsOptions2D&& from) noexcept {
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
  static const SubmapsOptions2D& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SubmapsOptions2D* internal_default_instance() {
    return reinterpret_cast<const SubmapsOptions2D*>(
               &_SubmapsOptions2D_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SubmapsOptions2D& a, SubmapsOptions2D& b) {
    a.Swap(&b);
  }
  inline void Swap(SubmapsOptions2D* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SubmapsOptions2D* New() const final {
    return CreateMaybeMessage<SubmapsOptions2D>(nullptr);
  }

  SubmapsOptions2D* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SubmapsOptions2D>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SubmapsOptions2D& from);
  void MergeFrom(const SubmapsOptions2D& from);
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
  void InternalSwap(SubmapsOptions2D* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.mapping.proto.SubmapsOptions2D";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f2d_2eproto);
    return ::descriptor_table_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f2d_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGridOptions2DFieldNumber = 2,
    kRangeDataInserterOptionsFieldNumber = 3,
    kNumRangeDataFieldNumber = 1,
  };
  // .cartographer.mapping.proto.GridOptions2D grid_options_2d = 2;
  bool has_grid_options_2d() const;
  private:
  bool _internal_has_grid_options_2d() const;
  public:
  void clear_grid_options_2d();
  const ::cartographer::mapping::proto::GridOptions2D& grid_options_2d() const;
  ::cartographer::mapping::proto::GridOptions2D* release_grid_options_2d();
  ::cartographer::mapping::proto::GridOptions2D* mutable_grid_options_2d();
  void set_allocated_grid_options_2d(::cartographer::mapping::proto::GridOptions2D* grid_options_2d);
  private:
  const ::cartographer::mapping::proto::GridOptions2D& _internal_grid_options_2d() const;
  ::cartographer::mapping::proto::GridOptions2D* _internal_mutable_grid_options_2d();
  public:

  // .cartographer.mapping.proto.RangeDataInserterOptions range_data_inserter_options = 3;
  bool has_range_data_inserter_options() const;
  private:
  bool _internal_has_range_data_inserter_options() const;
  public:
  void clear_range_data_inserter_options();
  const ::cartographer::mapping::proto::RangeDataInserterOptions& range_data_inserter_options() const;
  ::cartographer::mapping::proto::RangeDataInserterOptions* release_range_data_inserter_options();
  ::cartographer::mapping::proto::RangeDataInserterOptions* mutable_range_data_inserter_options();
  void set_allocated_range_data_inserter_options(::cartographer::mapping::proto::RangeDataInserterOptions* range_data_inserter_options);
  private:
  const ::cartographer::mapping::proto::RangeDataInserterOptions& _internal_range_data_inserter_options() const;
  ::cartographer::mapping::proto::RangeDataInserterOptions* _internal_mutable_range_data_inserter_options();
  public:

  // int32 num_range_data = 1;
  void clear_num_range_data();
  ::PROTOBUF_NAMESPACE_ID::int32 num_range_data() const;
  void set_num_range_data(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_num_range_data() const;
  void _internal_set_num_range_data(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SubmapsOptions2D)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::mapping::proto::GridOptions2D* grid_options_2d_;
  ::cartographer::mapping::proto::RangeDataInserterOptions* range_data_inserter_options_;
  ::PROTOBUF_NAMESPACE_ID::int32 num_range_data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f2d_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SubmapsOptions2D

// int32 num_range_data = 1;
inline void SubmapsOptions2D::clear_num_range_data() {
  num_range_data_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SubmapsOptions2D::_internal_num_range_data() const {
  return num_range_data_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SubmapsOptions2D::num_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions2D.num_range_data)
  return _internal_num_range_data();
}
inline void SubmapsOptions2D::_internal_set_num_range_data(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  num_range_data_ = value;
}
inline void SubmapsOptions2D::set_num_range_data(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_num_range_data(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions2D.num_range_data)
}

// .cartographer.mapping.proto.GridOptions2D grid_options_2d = 2;
inline bool SubmapsOptions2D::_internal_has_grid_options_2d() const {
  return this != internal_default_instance() && grid_options_2d_ != nullptr;
}
inline bool SubmapsOptions2D::has_grid_options_2d() const {
  return _internal_has_grid_options_2d();
}
inline const ::cartographer::mapping::proto::GridOptions2D& SubmapsOptions2D::_internal_grid_options_2d() const {
  const ::cartographer::mapping::proto::GridOptions2D* p = grid_options_2d_;
  return p != nullptr ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::GridOptions2D*>(
      &::cartographer::mapping::proto::_GridOptions2D_default_instance_);
}
inline const ::cartographer::mapping::proto::GridOptions2D& SubmapsOptions2D::grid_options_2d() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions2D.grid_options_2d)
  return _internal_grid_options_2d();
}
inline ::cartographer::mapping::proto::GridOptions2D* SubmapsOptions2D::release_grid_options_2d() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SubmapsOptions2D.grid_options_2d)
  
  ::cartographer::mapping::proto::GridOptions2D* temp = grid_options_2d_;
  grid_options_2d_ = nullptr;
  return temp;
}
inline ::cartographer::mapping::proto::GridOptions2D* SubmapsOptions2D::_internal_mutable_grid_options_2d() {
  
  if (grid_options_2d_ == nullptr) {
    auto* p = CreateMaybeMessage<::cartographer::mapping::proto::GridOptions2D>(GetArenaNoVirtual());
    grid_options_2d_ = p;
  }
  return grid_options_2d_;
}
inline ::cartographer::mapping::proto::GridOptions2D* SubmapsOptions2D::mutable_grid_options_2d() {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SubmapsOptions2D.grid_options_2d)
  return _internal_mutable_grid_options_2d();
}
inline void SubmapsOptions2D::set_allocated_grid_options_2d(::cartographer::mapping::proto::GridOptions2D* grid_options_2d) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(grid_options_2d_);
  }
  if (grid_options_2d) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      grid_options_2d = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, grid_options_2d, submessage_arena);
    }
    
  } else {
    
  }
  grid_options_2d_ = grid_options_2d;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SubmapsOptions2D.grid_options_2d)
}

// .cartographer.mapping.proto.RangeDataInserterOptions range_data_inserter_options = 3;
inline bool SubmapsOptions2D::_internal_has_range_data_inserter_options() const {
  return this != internal_default_instance() && range_data_inserter_options_ != nullptr;
}
inline bool SubmapsOptions2D::has_range_data_inserter_options() const {
  return _internal_has_range_data_inserter_options();
}
inline const ::cartographer::mapping::proto::RangeDataInserterOptions& SubmapsOptions2D::_internal_range_data_inserter_options() const {
  const ::cartographer::mapping::proto::RangeDataInserterOptions* p = range_data_inserter_options_;
  return p != nullptr ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::RangeDataInserterOptions*>(
      &::cartographer::mapping::proto::_RangeDataInserterOptions_default_instance_);
}
inline const ::cartographer::mapping::proto::RangeDataInserterOptions& SubmapsOptions2D::range_data_inserter_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
  return _internal_range_data_inserter_options();
}
inline ::cartographer::mapping::proto::RangeDataInserterOptions* SubmapsOptions2D::release_range_data_inserter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
  
  ::cartographer::mapping::proto::RangeDataInserterOptions* temp = range_data_inserter_options_;
  range_data_inserter_options_ = nullptr;
  return temp;
}
inline ::cartographer::mapping::proto::RangeDataInserterOptions* SubmapsOptions2D::_internal_mutable_range_data_inserter_options() {
  
  if (range_data_inserter_options_ == nullptr) {
    auto* p = CreateMaybeMessage<::cartographer::mapping::proto::RangeDataInserterOptions>(GetArenaNoVirtual());
    range_data_inserter_options_ = p;
  }
  return range_data_inserter_options_;
}
inline ::cartographer::mapping::proto::RangeDataInserterOptions* SubmapsOptions2D::mutable_range_data_inserter_options() {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
  return _internal_mutable_range_data_inserter_options();
}
inline void SubmapsOptions2D::set_allocated_range_data_inserter_options(::cartographer::mapping::proto::RangeDataInserterOptions* range_data_inserter_options) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(range_data_inserter_options_);
  }
  if (range_data_inserter_options) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      range_data_inserter_options = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, range_data_inserter_options, submessage_arena);
    }
    
  } else {
    
  }
  range_data_inserter_options_ = range_data_inserter_options;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SubmapsOptions2D.range_data_inserter_options)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f2d_2eproto
