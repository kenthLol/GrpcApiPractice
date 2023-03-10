// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Models/ServiceStatus.proto

#include "Models/ServiceStatus.pb.h"

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

namespace GrpcApiPractice {
PROTOBUF_CONSTEXPR ServiceStatus::ServiceStatus(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.error_message_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.is_success_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ServiceStatusDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ServiceStatusDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ServiceStatusDefaultTypeInternal() {}
  union {
    ServiceStatus _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ServiceStatusDefaultTypeInternal _ServiceStatus_default_instance_;
}  // namespace GrpcApiPractice
static ::_pb::Metadata file_level_metadata_Models_2fServiceStatus_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Models_2fServiceStatus_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Models_2fServiceStatus_2eproto = nullptr;

const uint32_t TableStruct_Models_2fServiceStatus_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::ServiceStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::ServiceStatus, _impl_.is_success_),
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::ServiceStatus, _impl_.error_message_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::GrpcApiPractice::ServiceStatus)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::GrpcApiPractice::_ServiceStatus_default_instance_._instance,
};

const char descriptor_table_protodef_Models_2fServiceStatus_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032Models/ServiceStatus.proto\022\017GrpcApiPra"
  "ctice\":\n\rServiceStatus\022\022\n\nis_success\030\001 \001"
  "(\010\022\025\n\rerror_message\030\002 \001(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Models_2fServiceStatus_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Models_2fServiceStatus_2eproto = {
    false, false, 113, descriptor_table_protodef_Models_2fServiceStatus_2eproto,
    "Models/ServiceStatus.proto",
    &descriptor_table_Models_2fServiceStatus_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_Models_2fServiceStatus_2eproto::offsets,
    file_level_metadata_Models_2fServiceStatus_2eproto, file_level_enum_descriptors_Models_2fServiceStatus_2eproto,
    file_level_service_descriptors_Models_2fServiceStatus_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Models_2fServiceStatus_2eproto_getter() {
  return &descriptor_table_Models_2fServiceStatus_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Models_2fServiceStatus_2eproto(&descriptor_table_Models_2fServiceStatus_2eproto);
namespace GrpcApiPractice {

// ===================================================================

class ServiceStatus::_Internal {
 public:
};

ServiceStatus::ServiceStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:GrpcApiPractice.ServiceStatus)
}
ServiceStatus::ServiceStatus(const ServiceStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ServiceStatus* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.error_message_){}
    , decltype(_impl_.is_success_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.error_message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.error_message_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_error_message().empty()) {
    _this->_impl_.error_message_.Set(from._internal_error_message(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.is_success_ = from._impl_.is_success_;
  // @@protoc_insertion_point(copy_constructor:GrpcApiPractice.ServiceStatus)
}

inline void ServiceStatus::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.error_message_){}
    , decltype(_impl_.is_success_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.error_message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.error_message_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ServiceStatus::~ServiceStatus() {
  // @@protoc_insertion_point(destructor:GrpcApiPractice.ServiceStatus)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ServiceStatus::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.error_message_.Destroy();
}

void ServiceStatus::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ServiceStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:GrpcApiPractice.ServiceStatus)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.error_message_.ClearToEmpty();
  _impl_.is_success_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ServiceStatus::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool is_success = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.is_success_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string error_message = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_error_message();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "GrpcApiPractice.ServiceStatus.error_message"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ServiceStatus::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GrpcApiPractice.ServiceStatus)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_success = 1;
  if (this->_internal_is_success() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_is_success(), target);
  }

  // string error_message = 2;
  if (!this->_internal_error_message().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_error_message().data(), static_cast<int>(this->_internal_error_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "GrpcApiPractice.ServiceStatus.error_message");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_error_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GrpcApiPractice.ServiceStatus)
  return target;
}

size_t ServiceStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GrpcApiPractice.ServiceStatus)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string error_message = 2;
  if (!this->_internal_error_message().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_error_message());
  }

  // bool is_success = 1;
  if (this->_internal_is_success() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ServiceStatus::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ServiceStatus::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ServiceStatus::GetClassData() const { return &_class_data_; }


void ServiceStatus::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ServiceStatus*>(&to_msg);
  auto& from = static_cast<const ServiceStatus&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:GrpcApiPractice.ServiceStatus)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_error_message().empty()) {
    _this->_internal_set_error_message(from._internal_error_message());
  }
  if (from._internal_is_success() != 0) {
    _this->_internal_set_is_success(from._internal_is_success());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ServiceStatus::CopyFrom(const ServiceStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GrpcApiPractice.ServiceStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServiceStatus::IsInitialized() const {
  return true;
}

void ServiceStatus::InternalSwap(ServiceStatus* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.error_message_, lhs_arena,
      &other->_impl_.error_message_, rhs_arena
  );
  swap(_impl_.is_success_, other->_impl_.is_success_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ServiceStatus::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Models_2fServiceStatus_2eproto_getter, &descriptor_table_Models_2fServiceStatus_2eproto_once,
      file_level_metadata_Models_2fServiceStatus_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace GrpcApiPractice
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::GrpcApiPractice::ServiceStatus*
Arena::CreateMaybeMessage< ::GrpcApiPractice::ServiceStatus >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GrpcApiPractice::ServiceStatus >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
