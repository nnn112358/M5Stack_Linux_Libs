// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/annotations.proto

#include "annotations.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace google {
namespace api {
}  // namespace api
}  // namespace google
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fannotations_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fannotations_2eproto = nullptr;
const uint32_t TableStruct_google_2fapi_2fannotations_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_google_2fapi_2fannotations_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034google/api/annotations.proto\022\ngoogle.a"
  "pi\032\025google/api/http.proto\032 google/protob"
  "uf/descriptor.proto:E\n\004http\022\036.google.pro"
  "tobuf.MethodOptions\030\260\312\274\" \001(\0132\024.google.ap"
  "i.HttpRuleBn\n\016com.google.apiB\020Annotation"
  "sProtoP\001ZAgoogle.golang.org/genproto/goo"
  "gleapis/api/annotations;annotations\242\002\004GA"
  "PIb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_google_2fapi_2fannotations_2eproto_deps[2] = {
  &::descriptor_table_google_2fapi_2fhttp_2eproto,
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::_pbi::once_flag descriptor_table_google_2fapi_2fannotations_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fapi_2fannotations_2eproto = {
    false, false, 290, descriptor_table_protodef_google_2fapi_2fannotations_2eproto,
    "google/api/annotations.proto",
    &descriptor_table_google_2fapi_2fannotations_2eproto_once, descriptor_table_google_2fapi_2fannotations_2eproto_deps, 2, 0,
    schemas, file_default_instances, TableStruct_google_2fapi_2fannotations_2eproto::offsets,
    nullptr, file_level_enum_descriptors_google_2fapi_2fannotations_2eproto,
    file_level_service_descriptors_google_2fapi_2fannotations_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fapi_2fannotations_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fannotations_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fannotations_2eproto(&descriptor_table_google_2fapi_2fannotations_2eproto);
namespace google {
namespace api {
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::HttpRule >, 11, false>
  http(kHttpFieldNumber, ::google::api::HttpRule::default_instance(), nullptr);

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
