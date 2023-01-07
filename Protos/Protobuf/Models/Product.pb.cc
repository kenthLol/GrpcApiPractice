// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Models/Product.proto

#include "Models/Product.pb.h"

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
PROTOBUF_CONSTEXPR Product::Product(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.id_)*/uint64_t{0u}
  , /*decltype(_impl_.price_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ProductDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProductDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProductDefaultTypeInternal() {}
  union {
    Product _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProductDefaultTypeInternal _Product_default_instance_;
}  // namespace GrpcApiPractice
static ::_pb::Metadata file_level_metadata_Models_2fProduct_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Models_2fProduct_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Models_2fProduct_2eproto = nullptr;

const uint32_t TableStruct_Models_2fProduct_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::Product, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::Product, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::Product, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::GrpcApiPractice::Product, _impl_.price_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::GrpcApiPractice::Product)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::GrpcApiPractice::_Product_default_instance_._instance,
};

const char descriptor_table_protodef_Models_2fProduct_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024Models/Product.proto\022\017GrpcApiPractice\""
  "2\n\007Product\022\n\n\002id\030\001 \001(\004\022\014\n\004name\030\002 \001(\t\022\r\n\005"
  "price\030\003 \001(\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Models_2fProduct_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Models_2fProduct_2eproto = {
    false, false, 99, descriptor_table_protodef_Models_2fProduct_2eproto,
    "Models/Product.proto",
    &descriptor_table_Models_2fProduct_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_Models_2fProduct_2eproto::offsets,
    file_level_metadata_Models_2fProduct_2eproto, file_level_enum_descriptors_Models_2fProduct_2eproto,
    file_level_service_descriptors_Models_2fProduct_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Models_2fProduct_2eproto_getter() {
  return &descriptor_table_Models_2fProduct_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Models_2fProduct_2eproto(&descriptor_table_Models_2fProduct_2eproto);
namespace GrpcApiPractice {

// ===================================================================

class Product::_Internal {
 public:
};

Product::Product(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:GrpcApiPractice.Product)
}
Product::Product(const Product& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Product* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.id_){}
    , decltype(_impl_.price_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.id_, &from._impl_.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.price_) -
    reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.price_));
  // @@protoc_insertion_point(copy_constructor:GrpcApiPractice.Product)
}

inline void Product::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.id_){uint64_t{0u}}
    , decltype(_impl_.price_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Product::~Product() {
  // @@protoc_insertion_point(destructor:GrpcApiPractice.Product)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Product::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
}

void Product::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Product::Clear() {
// @@protoc_insertion_point(message_clear_start:GrpcApiPractice.Product)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  ::memset(&_impl_.id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.price_) -
      reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.price_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Product::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "GrpcApiPractice.Product.name"));
        } else
          goto handle_unusual;
        continue;
      // double price = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          _impl_.price_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

uint8_t* Product::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GrpcApiPractice.Product)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(1, this->_internal_id(), target);
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "GrpcApiPractice.Product.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // double price = 3;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_price = this->_internal_price();
  uint64_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(3, this->_internal_price(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GrpcApiPractice.Product)
  return target;
}

size_t Product::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GrpcApiPractice.Product)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 2;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // uint64 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_id());
  }

  // double price = 3;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_price = this->_internal_price();
  uint64_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    total_size += 1 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Product::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Product::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Product::GetClassData() const { return &_class_data_; }


void Product::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Product*>(&to_msg);
  auto& from = static_cast<const Product&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:GrpcApiPractice.Product)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_id() != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_price = from._internal_price();
  uint64_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    _this->_internal_set_price(from._internal_price());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Product::CopyFrom(const Product& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GrpcApiPractice.Product)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Product::IsInitialized() const {
  return true;
}

void Product::InternalSwap(Product* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Product, _impl_.price_)
      + sizeof(Product::_impl_.price_)
      - PROTOBUF_FIELD_OFFSET(Product, _impl_.id_)>(
          reinterpret_cast<char*>(&_impl_.id_),
          reinterpret_cast<char*>(&other->_impl_.id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Product::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Models_2fProduct_2eproto_getter, &descriptor_table_Models_2fProduct_2eproto_once,
      file_level_metadata_Models_2fProduct_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace GrpcApiPractice
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::GrpcApiPractice::Product*
Arena::CreateMaybeMessage< ::GrpcApiPractice::Product >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GrpcApiPractice::Product >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
