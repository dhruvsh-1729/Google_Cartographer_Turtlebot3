// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/grid_2d_options.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto;
namespace cartographer {
namespace mapping {
namespace proto {
class GridOptions2D;
class GridOptions2DDefaultTypeInternal;
extern GridOptions2DDefaultTypeInternal _GridOptions2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::mapping::proto::GridOptions2D* Arena::CreateMaybeMessage<::cartographer::mapping::proto::GridOptions2D>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace mapping {
namespace proto {

enum GridOptions2D_GridType : int {
  GridOptions2D_GridType_INVALID_GRID = 0,
  GridOptions2D_GridType_PROBABILITY_GRID = 1,
  GridOptions2D_GridType_TSDF = 2,
  GridOptions2D_GridType_GridOptions2D_GridType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  GridOptions2D_GridType_GridOptions2D_GridType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool GridOptions2D_GridType_IsValid(int value);
constexpr GridOptions2D_GridType GridOptions2D_GridType_GridType_MIN = GridOptions2D_GridType_INVALID_GRID;
constexpr GridOptions2D_GridType GridOptions2D_GridType_GridType_MAX = GridOptions2D_GridType_TSDF;
constexpr int GridOptions2D_GridType_GridType_ARRAYSIZE = GridOptions2D_GridType_GridType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GridOptions2D_GridType_descriptor();
template<typename T>
inline const std::string& GridOptions2D_GridType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, GridOptions2D_GridType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function GridOptions2D_GridType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    GridOptions2D_GridType_descriptor(), enum_t_value);
}
inline bool GridOptions2D_GridType_Parse(
    const std::string& name, GridOptions2D_GridType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<GridOptions2D_GridType>(
    GridOptions2D_GridType_descriptor(), name, value);
}
// ===================================================================

class GridOptions2D :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.GridOptions2D) */ {
 public:
  GridOptions2D();
  virtual ~GridOptions2D();

  GridOptions2D(const GridOptions2D& from);
  GridOptions2D(GridOptions2D&& from) noexcept
    : GridOptions2D() {
    *this = ::std::move(from);
  }

  inline GridOptions2D& operator=(const GridOptions2D& from) {
    CopyFrom(from);
    return *this;
  }
  inline GridOptions2D& operator=(GridOptions2D&& from) noexcept {
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
  static const GridOptions2D& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GridOptions2D* internal_default_instance() {
    return reinterpret_cast<const GridOptions2D*>(
               &_GridOptions2D_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GridOptions2D& a, GridOptions2D& b) {
    a.Swap(&b);
  }
  inline void Swap(GridOptions2D* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GridOptions2D* New() const final {
    return CreateMaybeMessage<GridOptions2D>(nullptr);
  }

  GridOptions2D* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GridOptions2D>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GridOptions2D& from);
  void MergeFrom(const GridOptions2D& from);
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
  void InternalSwap(GridOptions2D* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.mapping.proto.GridOptions2D";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto);
    return ::descriptor_table_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef GridOptions2D_GridType GridType;
  static constexpr GridType INVALID_GRID =
    GridOptions2D_GridType_INVALID_GRID;
  static constexpr GridType PROBABILITY_GRID =
    GridOptions2D_GridType_PROBABILITY_GRID;
  static constexpr GridType TSDF =
    GridOptions2D_GridType_TSDF;
  static inline bool GridType_IsValid(int value) {
    return GridOptions2D_GridType_IsValid(value);
  }
  static constexpr GridType GridType_MIN =
    GridOptions2D_GridType_GridType_MIN;
  static constexpr GridType GridType_MAX =
    GridOptions2D_GridType_GridType_MAX;
  static constexpr int GridType_ARRAYSIZE =
    GridOptions2D_GridType_GridType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  GridType_descriptor() {
    return GridOptions2D_GridType_descriptor();
  }
  template<typename T>
  static inline const std::string& GridType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, GridType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function GridType_Name.");
    return GridOptions2D_GridType_Name(enum_t_value);
  }
  static inline bool GridType_Parse(const std::string& name,
      GridType* value) {
    return GridOptions2D_GridType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kGridTypeFieldNumber = 1,
    kResolutionFieldNumber = 2,
  };
  // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  void clear_grid_type();
  ::cartographer::mapping::proto::GridOptions2D_GridType grid_type() const;
  void set_grid_type(::cartographer::mapping::proto::GridOptions2D_GridType value);
  private:
  ::cartographer::mapping::proto::GridOptions2D_GridType _internal_grid_type() const;
  void _internal_set_grid_type(::cartographer::mapping::proto::GridOptions2D_GridType value);
  public:

  // float resolution = 2;
  void clear_resolution();
  float resolution() const;
  void set_resolution(float value);
  private:
  float _internal_resolution() const;
  void _internal_set_resolution(float value);
  public:

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.GridOptions2D)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int grid_type_;
  float resolution_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GridOptions2D

// .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
inline void GridOptions2D::clear_grid_type() {
  grid_type_ = 0;
}
inline ::cartographer::mapping::proto::GridOptions2D_GridType GridOptions2D::_internal_grid_type() const {
  return static_cast< ::cartographer::mapping::proto::GridOptions2D_GridType >(grid_type_);
}
inline ::cartographer::mapping::proto::GridOptions2D_GridType GridOptions2D::grid_type() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.GridOptions2D.grid_type)
  return _internal_grid_type();
}
inline void GridOptions2D::_internal_set_grid_type(::cartographer::mapping::proto::GridOptions2D_GridType value) {
  
  grid_type_ = value;
}
inline void GridOptions2D::set_grid_type(::cartographer::mapping::proto::GridOptions2D_GridType value) {
  _internal_set_grid_type(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.GridOptions2D.grid_type)
}

// float resolution = 2;
inline void GridOptions2D::clear_resolution() {
  resolution_ = 0;
}
inline float GridOptions2D::_internal_resolution() const {
  return resolution_;
}
inline float GridOptions2D::resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.GridOptions2D.resolution)
  return _internal_resolution();
}
inline void GridOptions2D::_internal_set_resolution(float value) {
  
  resolution_ = value;
}
inline void GridOptions2D::set_resolution(float value) {
  _internal_set_resolution(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.GridOptions2D.resolution)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::cartographer::mapping::proto::GridOptions2D_GridType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::cartographer::mapping::proto::GridOptions2D_GridType>() {
  return ::cartographer::mapping::proto::GridOptions2D_GridType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fgrid_5f2d_5foptions_2eproto
