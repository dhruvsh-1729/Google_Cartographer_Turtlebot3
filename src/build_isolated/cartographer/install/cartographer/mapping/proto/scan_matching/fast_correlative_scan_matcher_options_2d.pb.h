// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/scan_matching/fast_correlative_scan_matcher_options_2d.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto;
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {
class FastCorrelativeScanMatcherOptions2D;
class FastCorrelativeScanMatcherOptions2DDefaultTypeInternal;
extern FastCorrelativeScanMatcherOptions2DDefaultTypeInternal _FastCorrelativeScanMatcherOptions2D_default_instance_;
}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D* Arena::CreateMaybeMessage<::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {

// ===================================================================

class FastCorrelativeScanMatcherOptions2D :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D) */ {
 public:
  FastCorrelativeScanMatcherOptions2D();
  virtual ~FastCorrelativeScanMatcherOptions2D();

  FastCorrelativeScanMatcherOptions2D(const FastCorrelativeScanMatcherOptions2D& from);
  FastCorrelativeScanMatcherOptions2D(FastCorrelativeScanMatcherOptions2D&& from) noexcept
    : FastCorrelativeScanMatcherOptions2D() {
    *this = ::std::move(from);
  }

  inline FastCorrelativeScanMatcherOptions2D& operator=(const FastCorrelativeScanMatcherOptions2D& from) {
    CopyFrom(from);
    return *this;
  }
  inline FastCorrelativeScanMatcherOptions2D& operator=(FastCorrelativeScanMatcherOptions2D&& from) noexcept {
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
  static const FastCorrelativeScanMatcherOptions2D& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FastCorrelativeScanMatcherOptions2D* internal_default_instance() {
    return reinterpret_cast<const FastCorrelativeScanMatcherOptions2D*>(
               &_FastCorrelativeScanMatcherOptions2D_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FastCorrelativeScanMatcherOptions2D& a, FastCorrelativeScanMatcherOptions2D& b) {
    a.Swap(&b);
  }
  inline void Swap(FastCorrelativeScanMatcherOptions2D* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FastCorrelativeScanMatcherOptions2D* New() const final {
    return CreateMaybeMessage<FastCorrelativeScanMatcherOptions2D>(nullptr);
  }

  FastCorrelativeScanMatcherOptions2D* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FastCorrelativeScanMatcherOptions2D>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FastCorrelativeScanMatcherOptions2D& from);
  void MergeFrom(const FastCorrelativeScanMatcherOptions2D& from);
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
  void InternalSwap(FastCorrelativeScanMatcherOptions2D* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto);
    return ::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLinearSearchWindowFieldNumber = 3,
    kAngularSearchWindowFieldNumber = 4,
    kBranchAndBoundDepthFieldNumber = 2,
  };
  // double linear_search_window = 3;
  void clear_linear_search_window();
  double linear_search_window() const;
  void set_linear_search_window(double value);
  private:
  double _internal_linear_search_window() const;
  void _internal_set_linear_search_window(double value);
  public:

  // double angular_search_window = 4;
  void clear_angular_search_window();
  double angular_search_window() const;
  void set_angular_search_window(double value);
  private:
  double _internal_angular_search_window() const;
  void _internal_set_angular_search_window(double value);
  public:

  // int32 branch_and_bound_depth = 2;
  void clear_branch_and_bound_depth();
  ::PROTOBUF_NAMESPACE_ID::int32 branch_and_bound_depth() const;
  void set_branch_and_bound_depth(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_branch_and_bound_depth() const;
  void _internal_set_branch_and_bound_depth(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double linear_search_window_;
  double angular_search_window_;
  ::PROTOBUF_NAMESPACE_ID::int32 branch_and_bound_depth_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FastCorrelativeScanMatcherOptions2D

// double linear_search_window = 3;
inline void FastCorrelativeScanMatcherOptions2D::clear_linear_search_window() {
  linear_search_window_ = 0;
}
inline double FastCorrelativeScanMatcherOptions2D::_internal_linear_search_window() const {
  return linear_search_window_;
}
inline double FastCorrelativeScanMatcherOptions2D::linear_search_window() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.linear_search_window)
  return _internal_linear_search_window();
}
inline void FastCorrelativeScanMatcherOptions2D::_internal_set_linear_search_window(double value) {
  
  linear_search_window_ = value;
}
inline void FastCorrelativeScanMatcherOptions2D::set_linear_search_window(double value) {
  _internal_set_linear_search_window(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.linear_search_window)
}

// double angular_search_window = 4;
inline void FastCorrelativeScanMatcherOptions2D::clear_angular_search_window() {
  angular_search_window_ = 0;
}
inline double FastCorrelativeScanMatcherOptions2D::_internal_angular_search_window() const {
  return angular_search_window_;
}
inline double FastCorrelativeScanMatcherOptions2D::angular_search_window() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.angular_search_window)
  return _internal_angular_search_window();
}
inline void FastCorrelativeScanMatcherOptions2D::_internal_set_angular_search_window(double value) {
  
  angular_search_window_ = value;
}
inline void FastCorrelativeScanMatcherOptions2D::set_angular_search_window(double value) {
  _internal_set_angular_search_window(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.angular_search_window)
}

// int32 branch_and_bound_depth = 2;
inline void FastCorrelativeScanMatcherOptions2D::clear_branch_and_bound_depth() {
  branch_and_bound_depth_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 FastCorrelativeScanMatcherOptions2D::_internal_branch_and_bound_depth() const {
  return branch_and_bound_depth_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 FastCorrelativeScanMatcherOptions2D::branch_and_bound_depth() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.branch_and_bound_depth)
  return _internal_branch_and_bound_depth();
}
inline void FastCorrelativeScanMatcherOptions2D::_internal_set_branch_and_bound_depth(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  branch_and_bound_depth_ = value;
}
inline void FastCorrelativeScanMatcherOptions2D::set_branch_and_bound_depth(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_branch_and_bound_depth(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D.branch_and_bound_depth)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto
