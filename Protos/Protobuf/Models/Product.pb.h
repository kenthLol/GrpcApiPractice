// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Models/Product.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Models_2fProduct_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Models_2fProduct_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Models_2fProduct_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Models_2fProduct_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Models_2fProduct_2eproto;
namespace GrpcApiPractice {
class Product;
struct ProductDefaultTypeInternal;
extern ProductDefaultTypeInternal _Product_default_instance_;
}  // namespace GrpcApiPractice
PROTOBUF_NAMESPACE_OPEN
template<> ::GrpcApiPractice::Product* Arena::CreateMaybeMessage<::GrpcApiPractice::Product>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace GrpcApiPractice {

// ===================================================================

class Product final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:GrpcApiPractice.Product) */ {
 public:
  inline Product() : Product(nullptr) {}
  ~Product() override;
  explicit PROTOBUF_CONSTEXPR Product(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Product(const Product& from);
  Product(Product&& from) noexcept
    : Product() {
    *this = ::std::move(from);
  }

  inline Product& operator=(const Product& from) {
    CopyFrom(from);
    return *this;
  }
  inline Product& operator=(Product&& from) noexcept {
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
  static const Product& default_instance() {
    return *internal_default_instance();
  }
  static inline const Product* internal_default_instance() {
    return reinterpret_cast<const Product*>(
               &_Product_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Product& a, Product& b) {
    a.Swap(&b);
  }
  inline void Swap(Product* other) {
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
  void UnsafeArenaSwap(Product* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Product* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Product>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Product& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Product& from) {
    Product::MergeImpl(*this, from);
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
  void InternalSwap(Product* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "GrpcApiPractice.Product";
  }
  protected:
  explicit Product(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kIdFieldNumber = 1,
    kPriceFieldNumber = 3,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // uint64 id = 1;
  void clear_id();
  uint64_t id() const;
  void set_id(uint64_t value);
  private:
  uint64_t _internal_id() const;
  void _internal_set_id(uint64_t value);
  public:

  // double price = 3;
  void clear_price();
  double price() const;
  void set_price(double value);
  private:
  double _internal_price() const;
  void _internal_set_price(double value);
  public:

  // @@protoc_insertion_point(class_scope:GrpcApiPractice.Product)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    uint64_t id_;
    double price_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Models_2fProduct_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Product

// uint64 id = 1;
inline void Product::clear_id() {
  _impl_.id_ = uint64_t{0u};
}
inline uint64_t Product::_internal_id() const {
  return _impl_.id_;
}
inline uint64_t Product::id() const {
  // @@protoc_insertion_point(field_get:GrpcApiPractice.Product.id)
  return _internal_id();
}
inline void Product::_internal_set_id(uint64_t value) {
  
  _impl_.id_ = value;
}
inline void Product::set_id(uint64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:GrpcApiPractice.Product.id)
}

// string name = 2;
inline void Product::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Product::name() const {
  // @@protoc_insertion_point(field_get:GrpcApiPractice.Product.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Product::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:GrpcApiPractice.Product.name)
}
inline std::string* Product::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:GrpcApiPractice.Product.name)
  return _s;
}
inline const std::string& Product::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Product::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Product::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Product::release_name() {
  // @@protoc_insertion_point(field_release:GrpcApiPractice.Product.name)
  return _impl_.name_.Release();
}
inline void Product::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:GrpcApiPractice.Product.name)
}

// double price = 3;
inline void Product::clear_price() {
  _impl_.price_ = 0;
}
inline double Product::_internal_price() const {
  return _impl_.price_;
}
inline double Product::price() const {
  // @@protoc_insertion_point(field_get:GrpcApiPractice.Product.price)
  return _internal_price();
}
inline void Product::_internal_set_price(double value) {
  
  _impl_.price_ = value;
}
inline void Product::set_price(double value) {
  _internal_set_price(value);
  // @@protoc_insertion_point(field_set:GrpcApiPractice.Product.price)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace GrpcApiPractice

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Models_2fProduct_2eproto
