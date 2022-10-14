// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/pose_graph/constraint_builder_options.proto

#include "cartographer/mapping/proto/pose_graph/constraint_builder_options.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_CeresScanMatcherOptions2D_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_CeresScanMatcherOptions3D_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_FastCorrelativeScanMatcherOptions2D_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f3d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_FastCorrelativeScanMatcherOptions3D_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f3d_2eproto;
namespace cartographer {
namespace mapping {
namespace constraints {
namespace proto {
class ConstraintBuilderOptionsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ConstraintBuilderOptions> _instance;
} _ConstraintBuilderOptions_default_instance_;
}  // namespace proto
}  // namespace constraints
}  // namespace mapping
}  // namespace cartographer
static void InitDefaultsscc_info_ConstraintBuilderOptions_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::cartographer::mapping::constraints::proto::_ConstraintBuilderOptions_default_instance_;
    new (ptr) ::cartographer::mapping::constraints::proto::ConstraintBuilderOptions();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::cartographer::mapping::constraints::proto::ConstraintBuilderOptions::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_ConstraintBuilderOptions_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 4, 0, InitDefaultsscc_info_ConstraintBuilderOptions_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto}, {
      &scc_info_FastCorrelativeScanMatcherOptions2D_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto.base,
      &scc_info_CeresScanMatcherOptions2D_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto.base,
      &scc_info_FastCorrelativeScanMatcherOptions3D_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f3d_2eproto.base,
      &scc_info_CeresScanMatcherOptions3D_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, sampling_ratio_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, max_constraint_distance_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, min_score_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, global_localization_min_score_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, loop_closure_translation_weight_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, loop_closure_rotation_weight_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, log_matches_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, fast_correlative_scan_matcher_options_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, ceres_scan_matcher_options_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, fast_correlative_scan_matcher_options_3d_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions, ceres_scan_matcher_options_3d_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::cartographer::mapping::constraints::proto::ConstraintBuilderOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::cartographer::mapping::constraints::proto::_ConstraintBuilderOptions_default_instance_),
};

const char descriptor_table_protodef_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nFcartographer/mapping/proto/pose_graph/"
  "constraint_builder_options.proto\022&cartog"
  "rapher.mapping.constraints.proto\032Lcartog"
  "rapher/mapping/proto/scan_matching/ceres"
  "_scan_matcher_options_2d.proto\032Lcartogra"
  "pher/mapping/proto/scan_matching/ceres_s"
  "can_matcher_options_3d.proto\032Wcartograph"
  "er/mapping/proto/scan_matching/fast_corr"
  "elative_scan_matcher_options_2d.proto\032Wc"
  "artographer/mapping/proto/scan_matching/"
  "fast_correlative_scan_matcher_options_3d"
  ".proto\"\305\005\n\030ConstraintBuilderOptions\022\026\n\016s"
  "ampling_ratio\030\001 \001(\001\022\037\n\027max_constraint_di"
  "stance\030\002 \001(\001\022\021\n\tmin_score\030\004 \001(\001\022%\n\035globa"
  "l_localization_min_score\030\005 \001(\001\022\'\n\037loop_c"
  "losure_translation_weight\030\r \001(\001\022$\n\034loop_"
  "closure_rotation_weight\030\016 \001(\001\022\023\n\013log_mat"
  "ches\030\010 \001(\010\022|\n%fast_correlative_scan_matc"
  "her_options\030\t \001(\0132M.cartographer.mapping"
  ".scan_matching.proto.FastCorrelativeScan"
  "MatcherOptions2D\022g\n\032ceres_scan_matcher_o"
  "ptions\030\013 \001(\0132C.cartographer.mapping.scan"
  "_matching.proto.CeresScanMatcherOptions2"
  "D\022\177\n(fast_correlative_scan_matcher_optio"
  "ns_3d\030\n \001(\0132M.cartographer.mapping.scan_"
  "matching.proto.FastCorrelativeScanMatche"
  "rOptions3D\022j\n\035ceres_scan_matcher_options"
  "_3d\030\014 \001(\0132C.cartographer.mapping.scan_ma"
  "tching.proto.CeresScanMatcherOptions3Db\006"
  "proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto_deps[4] = {
  &::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f2d_2eproto,
  &::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto,
  &::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f2d_2eproto,
  &::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_5f3d_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto_sccs[1] = {
  &scc_info_ConstraintBuilderOptions_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto_once;
static bool descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto = {
  &descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto_initialized, descriptor_table_protodef_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto, "cartographer/mapping/proto/pose_graph/constraint_builder_options.proto", 1166,
  &descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto_once, descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto_sccs, descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto_deps, 1, 4,
  schemas, file_default_instances, TableStruct_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto::offsets,
  file_level_metadata_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto, 1, file_level_enum_descriptors_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto, file_level_service_descriptors_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto), true);
namespace cartographer {
namespace mapping {
namespace constraints {
namespace proto {

// ===================================================================

void ConstraintBuilderOptions::InitAsDefaultInstance() {
  ::cartographer::mapping::constraints::proto::_ConstraintBuilderOptions_default_instance_._instance.get_mutable()->fast_correlative_scan_matcher_options_ = const_cast< ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D*>(
      ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D::internal_default_instance());
  ::cartographer::mapping::constraints::proto::_ConstraintBuilderOptions_default_instance_._instance.get_mutable()->ceres_scan_matcher_options_ = const_cast< ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D*>(
      ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D::internal_default_instance());
  ::cartographer::mapping::constraints::proto::_ConstraintBuilderOptions_default_instance_._instance.get_mutable()->fast_correlative_scan_matcher_options_3d_ = const_cast< ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D*>(
      ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D::internal_default_instance());
  ::cartographer::mapping::constraints::proto::_ConstraintBuilderOptions_default_instance_._instance.get_mutable()->ceres_scan_matcher_options_3d_ = const_cast< ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D*>(
      ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D::internal_default_instance());
}
class ConstraintBuilderOptions::_Internal {
 public:
  static const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D& fast_correlative_scan_matcher_options(const ConstraintBuilderOptions* msg);
  static const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D& ceres_scan_matcher_options(const ConstraintBuilderOptions* msg);
  static const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D& fast_correlative_scan_matcher_options_3d(const ConstraintBuilderOptions* msg);
  static const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D& ceres_scan_matcher_options_3d(const ConstraintBuilderOptions* msg);
};

const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D&
ConstraintBuilderOptions::_Internal::fast_correlative_scan_matcher_options(const ConstraintBuilderOptions* msg) {
  return *msg->fast_correlative_scan_matcher_options_;
}
const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D&
ConstraintBuilderOptions::_Internal::ceres_scan_matcher_options(const ConstraintBuilderOptions* msg) {
  return *msg->ceres_scan_matcher_options_;
}
const ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D&
ConstraintBuilderOptions::_Internal::fast_correlative_scan_matcher_options_3d(const ConstraintBuilderOptions* msg) {
  return *msg->fast_correlative_scan_matcher_options_3d_;
}
const ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D&
ConstraintBuilderOptions::_Internal::ceres_scan_matcher_options_3d(const ConstraintBuilderOptions* msg) {
  return *msg->ceres_scan_matcher_options_3d_;
}
void ConstraintBuilderOptions::clear_fast_correlative_scan_matcher_options() {
  if (GetArenaNoVirtual() == nullptr && fast_correlative_scan_matcher_options_ != nullptr) {
    delete fast_correlative_scan_matcher_options_;
  }
  fast_correlative_scan_matcher_options_ = nullptr;
}
void ConstraintBuilderOptions::clear_ceres_scan_matcher_options() {
  if (GetArenaNoVirtual() == nullptr && ceres_scan_matcher_options_ != nullptr) {
    delete ceres_scan_matcher_options_;
  }
  ceres_scan_matcher_options_ = nullptr;
}
void ConstraintBuilderOptions::clear_fast_correlative_scan_matcher_options_3d() {
  if (GetArenaNoVirtual() == nullptr && fast_correlative_scan_matcher_options_3d_ != nullptr) {
    delete fast_correlative_scan_matcher_options_3d_;
  }
  fast_correlative_scan_matcher_options_3d_ = nullptr;
}
void ConstraintBuilderOptions::clear_ceres_scan_matcher_options_3d() {
  if (GetArenaNoVirtual() == nullptr && ceres_scan_matcher_options_3d_ != nullptr) {
    delete ceres_scan_matcher_options_3d_;
  }
  ceres_scan_matcher_options_3d_ = nullptr;
}
ConstraintBuilderOptions::ConstraintBuilderOptions()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
}
ConstraintBuilderOptions::ConstraintBuilderOptions(const ConstraintBuilderOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_fast_correlative_scan_matcher_options()) {
    fast_correlative_scan_matcher_options_ = new ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D(*from.fast_correlative_scan_matcher_options_);
  } else {
    fast_correlative_scan_matcher_options_ = nullptr;
  }
  if (from._internal_has_fast_correlative_scan_matcher_options_3d()) {
    fast_correlative_scan_matcher_options_3d_ = new ::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D(*from.fast_correlative_scan_matcher_options_3d_);
  } else {
    fast_correlative_scan_matcher_options_3d_ = nullptr;
  }
  if (from._internal_has_ceres_scan_matcher_options()) {
    ceres_scan_matcher_options_ = new ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D(*from.ceres_scan_matcher_options_);
  } else {
    ceres_scan_matcher_options_ = nullptr;
  }
  if (from._internal_has_ceres_scan_matcher_options_3d()) {
    ceres_scan_matcher_options_3d_ = new ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D(*from.ceres_scan_matcher_options_3d_);
  } else {
    ceres_scan_matcher_options_3d_ = nullptr;
  }
  ::memcpy(&sampling_ratio_, &from.sampling_ratio_,
    static_cast<size_t>(reinterpret_cast<char*>(&loop_closure_rotation_weight_) -
    reinterpret_cast<char*>(&sampling_ratio_)) + sizeof(loop_closure_rotation_weight_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
}

void ConstraintBuilderOptions::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ConstraintBuilderOptions_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto.base);
  ::memset(&fast_correlative_scan_matcher_options_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&loop_closure_rotation_weight_) -
      reinterpret_cast<char*>(&fast_correlative_scan_matcher_options_)) + sizeof(loop_closure_rotation_weight_));
}

ConstraintBuilderOptions::~ConstraintBuilderOptions() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
  SharedDtor();
}

void ConstraintBuilderOptions::SharedDtor() {
  if (this != internal_default_instance()) delete fast_correlative_scan_matcher_options_;
  if (this != internal_default_instance()) delete fast_correlative_scan_matcher_options_3d_;
  if (this != internal_default_instance()) delete ceres_scan_matcher_options_;
  if (this != internal_default_instance()) delete ceres_scan_matcher_options_3d_;
}

void ConstraintBuilderOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ConstraintBuilderOptions& ConstraintBuilderOptions::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ConstraintBuilderOptions_cartographer_2fmapping_2fproto_2fpose_5fgraph_2fconstraint_5fbuilder_5foptions_2eproto.base);
  return *internal_default_instance();
}


void ConstraintBuilderOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && fast_correlative_scan_matcher_options_ != nullptr) {
    delete fast_correlative_scan_matcher_options_;
  }
  fast_correlative_scan_matcher_options_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && fast_correlative_scan_matcher_options_3d_ != nullptr) {
    delete fast_correlative_scan_matcher_options_3d_;
  }
  fast_correlative_scan_matcher_options_3d_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && ceres_scan_matcher_options_ != nullptr) {
    delete ceres_scan_matcher_options_;
  }
  ceres_scan_matcher_options_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && ceres_scan_matcher_options_3d_ != nullptr) {
    delete ceres_scan_matcher_options_3d_;
  }
  ceres_scan_matcher_options_3d_ = nullptr;
  ::memset(&sampling_ratio_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&loop_closure_rotation_weight_) -
      reinterpret_cast<char*>(&sampling_ratio_)) + sizeof(loop_closure_rotation_weight_));
  _internal_metadata_.Clear();
}

const char* ConstraintBuilderOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // double sampling_ratio = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          sampling_ratio_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double max_constraint_distance = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          max_constraint_distance_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double min_score = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          min_score_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double global_localization_min_score = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          global_localization_min_score_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // bool log_matches = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          log_matches_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D fast_correlative_scan_matcher_options = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr = ctx->ParseMessage(_internal_mutable_fast_correlative_scan_matcher_options(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions3D fast_correlative_scan_matcher_options_3d = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ctx->ParseMessage(_internal_mutable_fast_correlative_scan_matcher_options_3d(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D ceres_scan_matcher_options = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr = ctx->ParseMessage(_internal_mutable_ceres_scan_matcher_options(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D ceres_scan_matcher_options_3d = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          ptr = ctx->ParseMessage(_internal_mutable_ceres_scan_matcher_options_3d(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double loop_closure_translation_weight = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 105)) {
          loop_closure_translation_weight_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double loop_closure_rotation_weight = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 113)) {
          loop_closure_rotation_weight_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ConstraintBuilderOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double sampling_ratio = 1;
  if (!(this->sampling_ratio() <= 0 && this->sampling_ratio() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_sampling_ratio(), target);
  }

  // double max_constraint_distance = 2;
  if (!(this->max_constraint_distance() <= 0 && this->max_constraint_distance() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_max_constraint_distance(), target);
  }

  // double min_score = 4;
  if (!(this->min_score() <= 0 && this->min_score() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_min_score(), target);
  }

  // double global_localization_min_score = 5;
  if (!(this->global_localization_min_score() <= 0 && this->global_localization_min_score() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_global_localization_min_score(), target);
  }

  // bool log_matches = 8;
  if (this->log_matches() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(8, this->_internal_log_matches(), target);
  }

  // .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D fast_correlative_scan_matcher_options = 9;
  if (this->has_fast_correlative_scan_matcher_options()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        9, _Internal::fast_correlative_scan_matcher_options(this), target, stream);
  }

  // .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions3D fast_correlative_scan_matcher_options_3d = 10;
  if (this->has_fast_correlative_scan_matcher_options_3d()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        10, _Internal::fast_correlative_scan_matcher_options_3d(this), target, stream);
  }

  // .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D ceres_scan_matcher_options = 11;
  if (this->has_ceres_scan_matcher_options()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        11, _Internal::ceres_scan_matcher_options(this), target, stream);
  }

  // .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D ceres_scan_matcher_options_3d = 12;
  if (this->has_ceres_scan_matcher_options_3d()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        12, _Internal::ceres_scan_matcher_options_3d(this), target, stream);
  }

  // double loop_closure_translation_weight = 13;
  if (!(this->loop_closure_translation_weight() <= 0 && this->loop_closure_translation_weight() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(13, this->_internal_loop_closure_translation_weight(), target);
  }

  // double loop_closure_rotation_weight = 14;
  if (!(this->loop_closure_rotation_weight() <= 0 && this->loop_closure_rotation_weight() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(14, this->_internal_loop_closure_rotation_weight(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
  return target;
}

size_t ConstraintBuilderOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions2D fast_correlative_scan_matcher_options = 9;
  if (this->has_fast_correlative_scan_matcher_options()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *fast_correlative_scan_matcher_options_);
  }

  // .cartographer.mapping.scan_matching.proto.FastCorrelativeScanMatcherOptions3D fast_correlative_scan_matcher_options_3d = 10;
  if (this->has_fast_correlative_scan_matcher_options_3d()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *fast_correlative_scan_matcher_options_3d_);
  }

  // .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions2D ceres_scan_matcher_options = 11;
  if (this->has_ceres_scan_matcher_options()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ceres_scan_matcher_options_);
  }

  // .cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D ceres_scan_matcher_options_3d = 12;
  if (this->has_ceres_scan_matcher_options_3d()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ceres_scan_matcher_options_3d_);
  }

  // double sampling_ratio = 1;
  if (!(this->sampling_ratio() <= 0 && this->sampling_ratio() >= 0)) {
    total_size += 1 + 8;
  }

  // double max_constraint_distance = 2;
  if (!(this->max_constraint_distance() <= 0 && this->max_constraint_distance() >= 0)) {
    total_size += 1 + 8;
  }

  // double min_score = 4;
  if (!(this->min_score() <= 0 && this->min_score() >= 0)) {
    total_size += 1 + 8;
  }

  // double global_localization_min_score = 5;
  if (!(this->global_localization_min_score() <= 0 && this->global_localization_min_score() >= 0)) {
    total_size += 1 + 8;
  }

  // bool log_matches = 8;
  if (this->log_matches() != 0) {
    total_size += 1 + 1;
  }

  // double loop_closure_translation_weight = 13;
  if (!(this->loop_closure_translation_weight() <= 0 && this->loop_closure_translation_weight() >= 0)) {
    total_size += 1 + 8;
  }

  // double loop_closure_rotation_weight = 14;
  if (!(this->loop_closure_rotation_weight() <= 0 && this->loop_closure_rotation_weight() >= 0)) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ConstraintBuilderOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const ConstraintBuilderOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ConstraintBuilderOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
    MergeFrom(*source);
  }
}

void ConstraintBuilderOptions::MergeFrom(const ConstraintBuilderOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_fast_correlative_scan_matcher_options()) {
    _internal_mutable_fast_correlative_scan_matcher_options()->::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions2D::MergeFrom(from._internal_fast_correlative_scan_matcher_options());
  }
  if (from.has_fast_correlative_scan_matcher_options_3d()) {
    _internal_mutable_fast_correlative_scan_matcher_options_3d()->::cartographer::mapping::scan_matching::proto::FastCorrelativeScanMatcherOptions3D::MergeFrom(from._internal_fast_correlative_scan_matcher_options_3d());
  }
  if (from.has_ceres_scan_matcher_options()) {
    _internal_mutable_ceres_scan_matcher_options()->::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions2D::MergeFrom(from._internal_ceres_scan_matcher_options());
  }
  if (from.has_ceres_scan_matcher_options_3d()) {
    _internal_mutable_ceres_scan_matcher_options_3d()->::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D::MergeFrom(from._internal_ceres_scan_matcher_options_3d());
  }
  if (!(from.sampling_ratio() <= 0 && from.sampling_ratio() >= 0)) {
    _internal_set_sampling_ratio(from._internal_sampling_ratio());
  }
  if (!(from.max_constraint_distance() <= 0 && from.max_constraint_distance() >= 0)) {
    _internal_set_max_constraint_distance(from._internal_max_constraint_distance());
  }
  if (!(from.min_score() <= 0 && from.min_score() >= 0)) {
    _internal_set_min_score(from._internal_min_score());
  }
  if (!(from.global_localization_min_score() <= 0 && from.global_localization_min_score() >= 0)) {
    _internal_set_global_localization_min_score(from._internal_global_localization_min_score());
  }
  if (from.log_matches() != 0) {
    _internal_set_log_matches(from._internal_log_matches());
  }
  if (!(from.loop_closure_translation_weight() <= 0 && from.loop_closure_translation_weight() >= 0)) {
    _internal_set_loop_closure_translation_weight(from._internal_loop_closure_translation_weight());
  }
  if (!(from.loop_closure_rotation_weight() <= 0 && from.loop_closure_rotation_weight() >= 0)) {
    _internal_set_loop_closure_rotation_weight(from._internal_loop_closure_rotation_weight());
  }
}

void ConstraintBuilderOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConstraintBuilderOptions::CopyFrom(const ConstraintBuilderOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.constraints.proto.ConstraintBuilderOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConstraintBuilderOptions::IsInitialized() const {
  return true;
}

void ConstraintBuilderOptions::InternalSwap(ConstraintBuilderOptions* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(fast_correlative_scan_matcher_options_, other->fast_correlative_scan_matcher_options_);
  swap(fast_correlative_scan_matcher_options_3d_, other->fast_correlative_scan_matcher_options_3d_);
  swap(ceres_scan_matcher_options_, other->ceres_scan_matcher_options_);
  swap(ceres_scan_matcher_options_3d_, other->ceres_scan_matcher_options_3d_);
  swap(sampling_ratio_, other->sampling_ratio_);
  swap(max_constraint_distance_, other->max_constraint_distance_);
  swap(min_score_, other->min_score_);
  swap(global_localization_min_score_, other->global_localization_min_score_);
  swap(log_matches_, other->log_matches_);
  swap(loop_closure_translation_weight_, other->loop_closure_translation_weight_);
  swap(loop_closure_rotation_weight_, other->loop_closure_rotation_weight_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ConstraintBuilderOptions::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace constraints
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cartographer::mapping::constraints::proto::ConstraintBuilderOptions* Arena::CreateMaybeMessage< ::cartographer::mapping::constraints::proto::ConstraintBuilderOptions >(Arena* arena) {
  return Arena::CreateInternal< ::cartographer::mapping::constraints::proto::ConstraintBuilderOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
