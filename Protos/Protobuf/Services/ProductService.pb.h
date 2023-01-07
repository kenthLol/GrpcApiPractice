// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Services/ProductService.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Services_2fProductService_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Services_2fProductService_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021008 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "Models/Product.pb.h"
#include "Models/ServiceStatus.pb.h"
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Services_2fProductService_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Services_2fProductService_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Services_2fProductService_2eproto;
namespace GrpcApiPractice {
class ListProductResponse;
struct ListProductResponseDefaultTypeInternal;
extern ListProductResponseDefaultTypeInternal _ListProductResponse_default_instance_;
}  // namespace GrpcApiPractice
PROTOBUF_NAMESPACE_OPEN
template<> ::GrpcApiPractice::ListProductResponse* Arena::CreateMaybeMessage<::GrpcApiPractice::ListProductResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace GrpcApiPractice {

// ===================================================================

class ListProductResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:GrpcApiPractice.ListProductResponse) */ {
 public:
  inline ListProductResponse() : ListProductResponse(nullptr) {}
  ~ListProductResponse() override;
  explicit PROTOBUF_CONSTEXPR ListProductResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ListProductResponse(const ListProductResponse& from);
  ListProductResponse(ListProductResponse&& from) noexcept
    : ListProductResponse() {
    *this = ::std::move(from);
  }

  inline ListProductResponse& operator=(const ListProductResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ListProductResponse& operator=(ListProductResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ListProductResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ListProductResponse* internal_default_instance() {
    return reinterpret_cast<const ListProductResponse*>(
               &_ListProductResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ListProductResponse& a, ListProductResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ListProductResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ListProductResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ListProductResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ListProductResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ListProductResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ListProductResponse& from) {
    ListProductResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ListProductResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "GrpcApiPractice.ListProductResponse";
  }
  protected:
  explicit ListProductResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProductsFieldNumber = 1,
  };
  // repeated .GrpcApiPractice.Product products = 1;
  int products_size() const;
  private:
  int _internal_products_size() const;
  public:
  void clear_products();
  ::GrpcApiPractice::Product* mutable_products(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::GrpcApiPractice::Product >*
      mutable_products();
  private:
  const ::GrpcApiPractice::Product& _internal_products(int index) const;
  ::GrpcApiPractice::Product* _internal_add_products();
  public:
  const ::GrpcApiPractice::Product& products(int index) const;
  ::GrpcApiPractice::Product* add_products();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::GrpcApiPractice::Product >&
      products() const;

  // @@protoc_insertion_point(class_scope:GrpcApiPractice.ListProductResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::GrpcApiPractice::Product > products_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Services_2fProductService_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ListProductResponse

// repeated .GrpcApiPractice.Product products = 1;
inline int ListProductResponse::_internal_products_size() const {
  return _impl_.products_.size();
}
inline int ListProductResponse::products_size() const {
  return _internal_products_size();
}
inline ::GrpcApiPractice::Product* ListProductResponse::mutable_products(int index) {
  // @@protoc_insertion_point(field_mutable:GrpcApiPractice.ListProductResponse.products)
  return _impl_.products_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::GrpcApiPractice::Product >*
ListProductResponse::mutable_products() {
  // @@protoc_insertion_point(field_mutable_list:GrpcApiPractice.ListProductResponse.products)
  return &_impl_.products_;
}
inline const ::GrpcApiPractice::Product& ListProductResponse::_internal_products(int index) const {
  return _impl_.products_.Get(index);
}
inline const ::GrpcApiPractice::Product& ListProductResponse::products(int index) const {
  // @@protoc_insertion_point(field_get:GrpcApiPractice.ListProductResponse.products)
  return _internal_products(index);
}
inline ::GrpcApiPractice::Product* ListProductResponse::_internal_add_products() {
  return _impl_.products_.Add();
}
inline ::GrpcApiPractice::Product* ListProductResponse::add_products() {
  ::GrpcApiPractice::Product* _add = _internal_add_products();
  // @@protoc_insertion_point(field_add:GrpcApiPractice.ListProductResponse.products)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::GrpcApiPractice::Product >&
ListProductResponse::products() const {
  // @@protoc_insertion_point(field_list:GrpcApiPractice.ListProductResponse.products)
  return _impl_.products_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace GrpcApiPractice

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Services_2fProductService_2eproto