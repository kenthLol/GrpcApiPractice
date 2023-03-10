// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Services/ClientService.proto

#include "Services/ClientService.pb.h"

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
PROTOBUF_CONSTEXPR ClientByIdRequest::ClientByIdRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.client_id_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ClientByIdRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ClientByIdRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ClientByIdRequestDefaultTypeInternal() {}
  union {
    ClientByIdRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ClientByIdRequestDefaultTypeInternal _ClientByIdRequest_default_instance_;
PROTOBUF_CONSTEXPR ListClientResponse::ListClientResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.client_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ListClientResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ListClientResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ListClientResponseDefaultTypeInternal() {}
  union {
    ListClientResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ListClientResponseDefaultTypeInternal _ListClientResponse_default_instance_;
}  // namespace GrpcApiPractice
static ::_pb::Metadata file_level_metadata_Services_2fClientService_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Services_2fClientService_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Services_2fClientService_2eproto = nullptr;

const uint32_t TableStruct_Services_2fClientService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::ClientByIdRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::ClientByIdRequest, _impl_.client_id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::ListClientResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::ListClientResponse, _impl_.client_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::GrpcApiPractice::ClientByIdRequest)},
  { 7, -1, -1, sizeof(::GrpcApiPractice::ListClientResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::GrpcApiPractice::_ClientByIdRequest_default_instance_._instance,
  &::GrpcApiPractice::_ListClientResponse_default_instance_._instance,
};

const char descriptor_table_protodef_Services_2fClientService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034Services/ClientService.proto\022\017GrpcApiP"
  "ractice\032\023Models/Client.proto\032\032Models/Ser"
  "viceStatus.proto\032\033google/protobuf/empty."
  "proto\"&\n\021ClientByIdRequest\022\021\n\tclient_id\030"
  "\001 \001(\003\"=\n\022ListClientResponse\022\'\n\006client\030\001 "
  "\003(\0132\027.GrpcApiPractice.Client2\204\002\n\rClientS"
  "ervice\022I\n\014CreateClient\022\027.GrpcApiPractice"
  ".Client\032\036.GrpcApiPractice.ServiceStatus\""
  "\000\022K\n\nListClient\022\026.google.protobuf.Empty\032"
  "#.GrpcApiPractice.ListClientResponse\"\000\022["
  "\n\016ListClientById\022\".GrpcApiPractice.Clien"
  "tByIdRequest\032#.GrpcApiPractice.ListClien"
  "tResponse\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_Services_2fClientService_2eproto_deps[3] = {
  &::descriptor_table_Models_2fClient_2eproto,
  &::descriptor_table_Models_2fServiceStatus_2eproto,
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_Services_2fClientService_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Services_2fClientService_2eproto = {
    false, false, 499, descriptor_table_protodef_Services_2fClientService_2eproto,
    "Services/ClientService.proto",
    &descriptor_table_Services_2fClientService_2eproto_once, descriptor_table_Services_2fClientService_2eproto_deps, 3, 2,
    schemas, file_default_instances, TableStruct_Services_2fClientService_2eproto::offsets,
    file_level_metadata_Services_2fClientService_2eproto, file_level_enum_descriptors_Services_2fClientService_2eproto,
    file_level_service_descriptors_Services_2fClientService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Services_2fClientService_2eproto_getter() {
  return &descriptor_table_Services_2fClientService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Services_2fClientService_2eproto(&descriptor_table_Services_2fClientService_2eproto);
namespace GrpcApiPractice {

// ===================================================================

class ClientByIdRequest::_Internal {
 public:
};

ClientByIdRequest::ClientByIdRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:GrpcApiPractice.ClientByIdRequest)
}
ClientByIdRequest::ClientByIdRequest(const ClientByIdRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ClientByIdRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.client_id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.client_id_ = from._impl_.client_id_;
  // @@protoc_insertion_point(copy_constructor:GrpcApiPractice.ClientByIdRequest)
}

inline void ClientByIdRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.client_id_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ClientByIdRequest::~ClientByIdRequest() {
  // @@protoc_insertion_point(destructor:GrpcApiPractice.ClientByIdRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ClientByIdRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ClientByIdRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ClientByIdRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:GrpcApiPractice.ClientByIdRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.client_id_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ClientByIdRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 client_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.client_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
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

uint8_t* ClientByIdRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GrpcApiPractice.ClientByIdRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 client_id = 1;
  if (this->_internal_client_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_client_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GrpcApiPractice.ClientByIdRequest)
  return target;
}

size_t ClientByIdRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GrpcApiPractice.ClientByIdRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 client_id = 1;
  if (this->_internal_client_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_client_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ClientByIdRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ClientByIdRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ClientByIdRequest::GetClassData() const { return &_class_data_; }


void ClientByIdRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ClientByIdRequest*>(&to_msg);
  auto& from = static_cast<const ClientByIdRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:GrpcApiPractice.ClientByIdRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_client_id() != 0) {
    _this->_internal_set_client_id(from._internal_client_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ClientByIdRequest::CopyFrom(const ClientByIdRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GrpcApiPractice.ClientByIdRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientByIdRequest::IsInitialized() const {
  return true;
}

void ClientByIdRequest::InternalSwap(ClientByIdRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.client_id_, other->_impl_.client_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ClientByIdRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Services_2fClientService_2eproto_getter, &descriptor_table_Services_2fClientService_2eproto_once,
      file_level_metadata_Services_2fClientService_2eproto[0]);
}

// ===================================================================

class ListClientResponse::_Internal {
 public:
};

void ListClientResponse::clear_client() {
  _impl_.client_.Clear();
}
ListClientResponse::ListClientResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:GrpcApiPractice.ListClientResponse)
}
ListClientResponse::ListClientResponse(const ListClientResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ListClientResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.client_){from._impl_.client_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:GrpcApiPractice.ListClientResponse)
}

inline void ListClientResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.client_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ListClientResponse::~ListClientResponse() {
  // @@protoc_insertion_point(destructor:GrpcApiPractice.ListClientResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ListClientResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.client_.~RepeatedPtrField();
}

void ListClientResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ListClientResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:GrpcApiPractice.ListClientResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.client_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ListClientResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .GrpcApiPractice.Client client = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_client(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* ListClientResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GrpcApiPractice.ListClientResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .GrpcApiPractice.Client client = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_client_size()); i < n; i++) {
    const auto& repfield = this->_internal_client(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GrpcApiPractice.ListClientResponse)
  return target;
}

size_t ListClientResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GrpcApiPractice.ListClientResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .GrpcApiPractice.Client client = 1;
  total_size += 1UL * this->_internal_client_size();
  for (const auto& msg : this->_impl_.client_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ListClientResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ListClientResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ListClientResponse::GetClassData() const { return &_class_data_; }


void ListClientResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ListClientResponse*>(&to_msg);
  auto& from = static_cast<const ListClientResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:GrpcApiPractice.ListClientResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.client_.MergeFrom(from._impl_.client_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ListClientResponse::CopyFrom(const ListClientResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GrpcApiPractice.ListClientResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ListClientResponse::IsInitialized() const {
  return true;
}

void ListClientResponse::InternalSwap(ListClientResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.client_.InternalSwap(&other->_impl_.client_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ListClientResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Services_2fClientService_2eproto_getter, &descriptor_table_Services_2fClientService_2eproto_once,
      file_level_metadata_Services_2fClientService_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace GrpcApiPractice
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::GrpcApiPractice::ClientByIdRequest*
Arena::CreateMaybeMessage< ::GrpcApiPractice::ClientByIdRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GrpcApiPractice::ClientByIdRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::GrpcApiPractice::ListClientResponse*
Arena::CreateMaybeMessage< ::GrpcApiPractice::ListClientResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GrpcApiPractice::ListClientResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
