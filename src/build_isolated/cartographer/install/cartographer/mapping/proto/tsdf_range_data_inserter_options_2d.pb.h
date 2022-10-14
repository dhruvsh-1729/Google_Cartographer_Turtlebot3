// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/tsdf_range_data_inserter_options_2d.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto

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
#include "cartographer/mapping/proto/normal_estimation_options_2d.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto;
namespace cartographer {
namespace mapping {
namespace proto {
class TSDFRangeDataInserterOptions2D;
class TSDFRangeDataInserterOptions2DDefaultTypeInternal;
extern TSDFRangeDataInserterOptions2DDefaultTypeInternal _TSDFRangeDataInserterOptions2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D* Arena::CreateMaybeMessage<::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace mapping {
namespace proto {

// ===================================================================

class TSDFRangeDataInserterOptions2D :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D) */ {
 public:
  TSDFRangeDataInserterOptions2D();
  virtual ~TSDFRangeDataInserterOptions2D();

  TSDFRangeDataInserterOptions2D(const TSDFRangeDataInserterOptions2D& from);
  TSDFRangeDataInserterOptions2D(TSDFRangeDataInserterOptions2D&& from) noexcept
    : TSDFRangeDataInserterOptions2D() {
    *this = ::std::move(from);
  }

  inline TSDFRangeDataInserterOptions2D& operator=(const TSDFRangeDataInserterOptions2D& from) {
    CopyFrom(from);
    return *this;
  }
  inline TSDFRangeDataInserterOptions2D& operator=(TSDFRangeDataInserterOptions2D&& from) noexcept {
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
  static const TSDFRangeDataInserterOptions2D& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TSDFRangeDataInserterOptions2D* internal_default_instance() {
    return reinterpret_cast<const TSDFRangeDataInserterOptions2D*>(
               &_TSDFRangeDataInserterOptions2D_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TSDFRangeDataInserterOptions2D& a, TSDFRangeDataInserterOptions2D& b) {
    a.Swap(&b);
  }
  inline void Swap(TSDFRangeDataInserterOptions2D* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TSDFRangeDataInserterOptions2D* New() const final {
    return CreateMaybeMessage<TSDFRangeDataInserterOptions2D>(nullptr);
  }

  TSDFRangeDataInserterOptions2D* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TSDFRangeDataInserterOptions2D>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TSDFRangeDataInserterOptions2D& from);
  void MergeFrom(const TSDFRangeDataInserterOptions2D& from);
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
  void InternalSwap(TSDFRangeDataInserterOptions2D* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.mapping.proto.TSDFRangeDataInserterOptions2D";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto);
    return ::descriptor_table_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNormalEstimationOptionsFieldNumber = 4,
    kTruncationDistanceFieldNumber = 1,
    kMaximumWeightFieldNumber = 2,
    kUpdateFreeSpaceFieldNumber = 3,
    kProjectSdfDistanceToScanNormalFieldNumber = 5,
    kUpdateWeightRangeExponentFieldNumber = 6,
    kUpdateWeightAngleScanNormalToRayKernelBandwidthFieldNumber = 7,
    kUpdateWeightDistanceCellToHitKernelBandwidthFieldNumber = 8,
  };
  // .cartographer.mapping.proto.NormalEstimationOptions2D normal_estimation_options = 4;
  bool has_normal_estimation_options() const;
  private:
  bool _internal_has_normal_estimation_options() const;
  public:
  void clear_normal_estimation_options();
  const ::cartographer::mapping::proto::NormalEstimationOptions2D& normal_estimation_options() const;
  ::cartographer::mapping::proto::NormalEstimationOptions2D* release_normal_estimation_options();
  ::cartographer::mapping::proto::NormalEstimationOptions2D* mutable_normal_estimation_options();
  void set_allocated_normal_estimation_options(::cartographer::mapping::proto::NormalEstimationOptions2D* normal_estimation_options);
  private:
  const ::cartographer::mapping::proto::NormalEstimationOptions2D& _internal_normal_estimation_options() const;
  ::cartographer::mapping::proto::NormalEstimationOptions2D* _internal_mutable_normal_estimation_options();
  public:

  // double truncation_distance = 1;
  void clear_truncation_distance();
  double truncation_distance() const;
  void set_truncation_distance(double value);
  private:
  double _internal_truncation_distance() const;
  void _internal_set_truncation_distance(double value);
  public:

  // double maximum_weight = 2;
  void clear_maximum_weight();
  double maximum_weight() const;
  void set_maximum_weight(double value);
  private:
  double _internal_maximum_weight() const;
  void _internal_set_maximum_weight(double value);
  public:

  // bool update_free_space = 3;
  void clear_update_free_space();
  bool update_free_space() const;
  void set_update_free_space(bool value);
  private:
  bool _internal_update_free_space() const;
  void _internal_set_update_free_space(bool value);
  public:

  // bool project_sdf_distance_to_scan_normal = 5;
  void clear_project_sdf_distance_to_scan_normal();
  bool project_sdf_distance_to_scan_normal() const;
  void set_project_sdf_distance_to_scan_normal(bool value);
  private:
  bool _internal_project_sdf_distance_to_scan_normal() const;
  void _internal_set_project_sdf_distance_to_scan_normal(bool value);
  public:

  // int32 update_weight_range_exponent = 6;
  void clear_update_weight_range_exponent();
  ::PROTOBUF_NAMESPACE_ID::int32 update_weight_range_exponent() const;
  void set_update_weight_range_exponent(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_update_weight_range_exponent() const;
  void _internal_set_update_weight_range_exponent(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // double update_weight_angle_scan_normal_to_ray_kernel_bandwidth = 7;
  void clear_update_weight_angle_scan_normal_to_ray_kernel_bandwidth();
  double update_weight_angle_scan_normal_to_ray_kernel_bandwidth() const;
  void set_update_weight_angle_scan_normal_to_ray_kernel_bandwidth(double value);
  private:
  double _internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth() const;
  void _internal_set_update_weight_angle_scan_normal_to_ray_kernel_bandwidth(double value);
  public:

  // double update_weight_distance_cell_to_hit_kernel_bandwidth = 8;
  void clear_update_weight_distance_cell_to_hit_kernel_bandwidth();
  double update_weight_distance_cell_to_hit_kernel_bandwidth() const;
  void set_update_weight_distance_cell_to_hit_kernel_bandwidth(double value);
  private:
  double _internal_update_weight_distance_cell_to_hit_kernel_bandwidth() const;
  void _internal_set_update_weight_distance_cell_to_hit_kernel_bandwidth(double value);
  public:

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::mapping::proto::NormalEstimationOptions2D* normal_estimation_options_;
  double truncation_distance_;
  double maximum_weight_;
  bool update_free_space_;
  bool project_sdf_distance_to_scan_normal_;
  ::PROTOBUF_NAMESPACE_ID::int32 update_weight_range_exponent_;
  double update_weight_angle_scan_normal_to_ray_kernel_bandwidth_;
  double update_weight_distance_cell_to_hit_kernel_bandwidth_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TSDFRangeDataInserterOptions2D

// double truncation_distance = 1;
inline void TSDFRangeDataInserterOptions2D::clear_truncation_distance() {
  truncation_distance_ = 0;
}
inline double TSDFRangeDataInserterOptions2D::_internal_truncation_distance() const {
  return truncation_distance_;
}
inline double TSDFRangeDataInserterOptions2D::truncation_distance() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.truncation_distance)
  return _internal_truncation_distance();
}
inline void TSDFRangeDataInserterOptions2D::_internal_set_truncation_distance(double value) {
  
  truncation_distance_ = value;
}
inline void TSDFRangeDataInserterOptions2D::set_truncation_distance(double value) {
  _internal_set_truncation_distance(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.truncation_distance)
}

// double maximum_weight = 2;
inline void TSDFRangeDataInserterOptions2D::clear_maximum_weight() {
  maximum_weight_ = 0;
}
inline double TSDFRangeDataInserterOptions2D::_internal_maximum_weight() const {
  return maximum_weight_;
}
inline double TSDFRangeDataInserterOptions2D::maximum_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.maximum_weight)
  return _internal_maximum_weight();
}
inline void TSDFRangeDataInserterOptions2D::_internal_set_maximum_weight(double value) {
  
  maximum_weight_ = value;
}
inline void TSDFRangeDataInserterOptions2D::set_maximum_weight(double value) {
  _internal_set_maximum_weight(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.maximum_weight)
}

// bool update_free_space = 3;
inline void TSDFRangeDataInserterOptions2D::clear_update_free_space() {
  update_free_space_ = false;
}
inline bool TSDFRangeDataInserterOptions2D::_internal_update_free_space() const {
  return update_free_space_;
}
inline bool TSDFRangeDataInserterOptions2D::update_free_space() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.update_free_space)
  return _internal_update_free_space();
}
inline void TSDFRangeDataInserterOptions2D::_internal_set_update_free_space(bool value) {
  
  update_free_space_ = value;
}
inline void TSDFRangeDataInserterOptions2D::set_update_free_space(bool value) {
  _internal_set_update_free_space(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.update_free_space)
}

// .cartographer.mapping.proto.NormalEstimationOptions2D normal_estimation_options = 4;
inline bool TSDFRangeDataInserterOptions2D::_internal_has_normal_estimation_options() const {
  return this != internal_default_instance() && normal_estimation_options_ != nullptr;
}
inline bool TSDFRangeDataInserterOptions2D::has_normal_estimation_options() const {
  return _internal_has_normal_estimation_options();
}
inline const ::cartographer::mapping::proto::NormalEstimationOptions2D& TSDFRangeDataInserterOptions2D::_internal_normal_estimation_options() const {
  const ::cartographer::mapping::proto::NormalEstimationOptions2D* p = normal_estimation_options_;
  return p != nullptr ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::NormalEstimationOptions2D*>(
      &::cartographer::mapping::proto::_NormalEstimationOptions2D_default_instance_);
}
inline const ::cartographer::mapping::proto::NormalEstimationOptions2D& TSDFRangeDataInserterOptions2D::normal_estimation_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.normal_estimation_options)
  return _internal_normal_estimation_options();
}
inline ::cartographer::mapping::proto::NormalEstimationOptions2D* TSDFRangeDataInserterOptions2D::release_normal_estimation_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.normal_estimation_options)
  
  ::cartographer::mapping::proto::NormalEstimationOptions2D* temp = normal_estimation_options_;
  normal_estimation_options_ = nullptr;
  return temp;
}
inline ::cartographer::mapping::proto::NormalEstimationOptions2D* TSDFRangeDataInserterOptions2D::_internal_mutable_normal_estimation_options() {
  
  if (normal_estimation_options_ == nullptr) {
    auto* p = CreateMaybeMessage<::cartographer::mapping::proto::NormalEstimationOptions2D>(GetArenaNoVirtual());
    normal_estimation_options_ = p;
  }
  return normal_estimation_options_;
}
inline ::cartographer::mapping::proto::NormalEstimationOptions2D* TSDFRangeDataInserterOptions2D::mutable_normal_estimation_options() {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.normal_estimation_options)
  return _internal_mutable_normal_estimation_options();
}
inline void TSDFRangeDataInserterOptions2D::set_allocated_normal_estimation_options(::cartographer::mapping::proto::NormalEstimationOptions2D* normal_estimation_options) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(normal_estimation_options_);
  }
  if (normal_estimation_options) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      normal_estimation_options = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, normal_estimation_options, submessage_arena);
    }
    
  } else {
    
  }
  normal_estimation_options_ = normal_estimation_options;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.normal_estimation_options)
}

// bool project_sdf_distance_to_scan_normal = 5;
inline void TSDFRangeDataInserterOptions2D::clear_project_sdf_distance_to_scan_normal() {
  project_sdf_distance_to_scan_normal_ = false;
}
inline bool TSDFRangeDataInserterOptions2D::_internal_project_sdf_distance_to_scan_normal() const {
  return project_sdf_distance_to_scan_normal_;
}
inline bool TSDFRangeDataInserterOptions2D::project_sdf_distance_to_scan_normal() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.project_sdf_distance_to_scan_normal)
  return _internal_project_sdf_distance_to_scan_normal();
}
inline void TSDFRangeDataInserterOptions2D::_internal_set_project_sdf_distance_to_scan_normal(bool value) {
  
  project_sdf_distance_to_scan_normal_ = value;
}
inline void TSDFRangeDataInserterOptions2D::set_project_sdf_distance_to_scan_normal(bool value) {
  _internal_set_project_sdf_distance_to_scan_normal(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.project_sdf_distance_to_scan_normal)
}

// int32 update_weight_range_exponent = 6;
inline void TSDFRangeDataInserterOptions2D::clear_update_weight_range_exponent() {
  update_weight_range_exponent_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TSDFRangeDataInserterOptions2D::_internal_update_weight_range_exponent() const {
  return update_weight_range_exponent_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TSDFRangeDataInserterOptions2D::update_weight_range_exponent() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.update_weight_range_exponent)
  return _internal_update_weight_range_exponent();
}
inline void TSDFRangeDataInserterOptions2D::_internal_set_update_weight_range_exponent(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  update_weight_range_exponent_ = value;
}
inline void TSDFRangeDataInserterOptions2D::set_update_weight_range_exponent(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_update_weight_range_exponent(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.update_weight_range_exponent)
}

// double update_weight_angle_scan_normal_to_ray_kernel_bandwidth = 7;
inline void TSDFRangeDataInserterOptions2D::clear_update_weight_angle_scan_normal_to_ray_kernel_bandwidth() {
  update_weight_angle_scan_normal_to_ray_kernel_bandwidth_ = 0;
}
inline double TSDFRangeDataInserterOptions2D::_internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth() const {
  return update_weight_angle_scan_normal_to_ray_kernel_bandwidth_;
}
inline double TSDFRangeDataInserterOptions2D::update_weight_angle_scan_normal_to_ray_kernel_bandwidth() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.update_weight_angle_scan_normal_to_ray_kernel_bandwidth)
  return _internal_update_weight_angle_scan_normal_to_ray_kernel_bandwidth();
}
inline void TSDFRangeDataInserterOptions2D::_internal_set_update_weight_angle_scan_normal_to_ray_kernel_bandwidth(double value) {
  
  update_weight_angle_scan_normal_to_ray_kernel_bandwidth_ = value;
}
inline void TSDFRangeDataInserterOptions2D::set_update_weight_angle_scan_normal_to_ray_kernel_bandwidth(double value) {
  _internal_set_update_weight_angle_scan_normal_to_ray_kernel_bandwidth(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.update_weight_angle_scan_normal_to_ray_kernel_bandwidth)
}

// double update_weight_distance_cell_to_hit_kernel_bandwidth = 8;
inline void TSDFRangeDataInserterOptions2D::clear_update_weight_distance_cell_to_hit_kernel_bandwidth() {
  update_weight_distance_cell_to_hit_kernel_bandwidth_ = 0;
}
inline double TSDFRangeDataInserterOptions2D::_internal_update_weight_distance_cell_to_hit_kernel_bandwidth() const {
  return update_weight_distance_cell_to_hit_kernel_bandwidth_;
}
inline double TSDFRangeDataInserterOptions2D::update_weight_distance_cell_to_hit_kernel_bandwidth() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.update_weight_distance_cell_to_hit_kernel_bandwidth)
  return _internal_update_weight_distance_cell_to_hit_kernel_bandwidth();
}
inline void TSDFRangeDataInserterOptions2D::_internal_set_update_weight_distance_cell_to_hit_kernel_bandwidth(double value) {
  
  update_weight_distance_cell_to_hit_kernel_bandwidth_ = value;
}
inline void TSDFRangeDataInserterOptions2D::set_update_weight_distance_cell_to_hit_kernel_bandwidth(double value) {
  _internal_set_update_weight_distance_cell_to_hit_kernel_bandwidth(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.TSDFRangeDataInserterOptions2D.update_weight_distance_cell_to_hit_kernel_bandwidth)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto
