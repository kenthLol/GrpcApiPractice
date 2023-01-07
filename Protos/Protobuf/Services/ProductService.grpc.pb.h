// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Services/ProductService.proto
#ifndef GRPC_Services_2fProductService_2eproto__INCLUDED
#define GRPC_Services_2fProductService_2eproto__INCLUDED

#include "Services/ProductService.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace GrpcApiPractice {

class ProductService final {
 public:
  static constexpr char const* service_full_name() {
    return "GrpcApiPractice.ProductService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::GrpcApiPractice::ServiceStatus* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ServiceStatus>> AsyncCreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ServiceStatus>>(AsyncCreateProductRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ServiceStatus>> PrepareAsyncCreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ServiceStatus>>(PrepareAsyncCreateProductRaw(context, request, cq));
    }
    virtual ::grpc::Status ListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::GrpcApiPractice::ListProductResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListProductResponse>> AsyncListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListProductResponse>>(AsyncListProductRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListProductResponse>> PrepareAsyncListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListProductResponse>>(PrepareAsyncListProductRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void CreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product* request, ::GrpcApiPractice::ServiceStatus* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product* request, ::GrpcApiPractice::ServiceStatus* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void ListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListProductResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListProductResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ServiceStatus>* AsyncCreateProductRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ServiceStatus>* PrepareAsyncCreateProductRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListProductResponse>* AsyncListProductRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListProductResponse>* PrepareAsyncListProductRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status CreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::GrpcApiPractice::ServiceStatus* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>> AsyncCreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>>(AsyncCreateProductRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>> PrepareAsyncCreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>>(PrepareAsyncCreateProductRaw(context, request, cq));
    }
    ::grpc::Status ListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::GrpcApiPractice::ListProductResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListProductResponse>> AsyncListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListProductResponse>>(AsyncListProductRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListProductResponse>> PrepareAsyncListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListProductResponse>>(PrepareAsyncListProductRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void CreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product* request, ::GrpcApiPractice::ServiceStatus* response, std::function<void(::grpc::Status)>) override;
      void CreateProduct(::grpc::ClientContext* context, const ::GrpcApiPractice::Product* request, ::GrpcApiPractice::ServiceStatus* response, ::grpc::ClientUnaryReactor* reactor) override;
      void ListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListProductResponse* response, std::function<void(::grpc::Status)>) override;
      void ListProduct(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListProductResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>* AsyncCreateProductRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>* PrepareAsyncCreateProductRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::Product& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListProductResponse>* AsyncListProductRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListProductResponse>* PrepareAsyncListProductRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CreateProduct_;
    const ::grpc::internal::RpcMethod rpcmethod_ListProduct_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CreateProduct(::grpc::ServerContext* context, const ::GrpcApiPractice::Product* request, ::GrpcApiPractice::ServiceStatus* response);
    virtual ::grpc::Status ListProduct(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListProductResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_CreateProduct() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateProduct(::grpc::ServerContext* /*context*/, const ::GrpcApiPractice::Product* /*request*/, ::GrpcApiPractice::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateProduct(::grpc::ServerContext* context, ::GrpcApiPractice::Product* request, ::grpc::ServerAsyncResponseWriter< ::GrpcApiPractice::ServiceStatus>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ListProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_ListProduct() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ListProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListProduct(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcApiPractice::ListProductResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListProduct(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::GrpcApiPractice::ListProductResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateProduct<WithAsyncMethod_ListProduct<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_CreateProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_CreateProduct() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::GrpcApiPractice::Product, ::GrpcApiPractice::ServiceStatus>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::GrpcApiPractice::Product* request, ::GrpcApiPractice::ServiceStatus* response) { return this->CreateProduct(context, request, response); }));}
    void SetMessageAllocatorFor_CreateProduct(
        ::grpc::MessageAllocator< ::GrpcApiPractice::Product, ::GrpcApiPractice::ServiceStatus>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::GrpcApiPractice::Product, ::GrpcApiPractice::ServiceStatus>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_CreateProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateProduct(::grpc::ServerContext* /*context*/, const ::GrpcApiPractice::Product* /*request*/, ::GrpcApiPractice::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CreateProduct(
      ::grpc::CallbackServerContext* /*context*/, const ::GrpcApiPractice::Product* /*request*/, ::GrpcApiPractice::ServiceStatus* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_ListProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_ListProduct() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::GrpcApiPractice::ListProductResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListProductResponse* response) { return this->ListProduct(context, request, response); }));}
    void SetMessageAllocatorFor_ListProduct(
        ::grpc::MessageAllocator< ::google::protobuf::Empty, ::GrpcApiPractice::ListProductResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::GrpcApiPractice::ListProductResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_ListProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListProduct(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcApiPractice::ListProductResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListProduct(
      ::grpc::CallbackServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcApiPractice::ListProductResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_CreateProduct<WithCallbackMethod_ListProduct<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_CreateProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_CreateProduct() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateProduct(::grpc::ServerContext* /*context*/, const ::GrpcApiPractice::Product* /*request*/, ::GrpcApiPractice::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ListProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_ListProduct() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ListProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListProduct(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcApiPractice::ListProductResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_CreateProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_CreateProduct() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_CreateProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateProduct(::grpc::ServerContext* /*context*/, const ::GrpcApiPractice::Product* /*request*/, ::GrpcApiPractice::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateProduct(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_ListProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_ListProduct() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_ListProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListProduct(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcApiPractice::ListProductResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListProduct(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_CreateProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_CreateProduct() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->CreateProduct(context, request, response); }));
    }
    ~WithRawCallbackMethod_CreateProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateProduct(::grpc::ServerContext* /*context*/, const ::GrpcApiPractice::Product* /*request*/, ::GrpcApiPractice::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* CreateProduct(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_ListProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_ListProduct() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->ListProduct(context, request, response); }));
    }
    ~WithRawCallbackMethod_ListProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListProduct(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcApiPractice::ListProductResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListProduct(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CreateProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_CreateProduct() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::GrpcApiPractice::Product, ::GrpcApiPractice::ServiceStatus>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::GrpcApiPractice::Product, ::GrpcApiPractice::ServiceStatus>* streamer) {
                       return this->StreamedCreateProduct(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_CreateProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CreateProduct(::grpc::ServerContext* /*context*/, const ::GrpcApiPractice::Product* /*request*/, ::GrpcApiPractice::ServiceStatus* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCreateProduct(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::GrpcApiPractice::Product,::GrpcApiPractice::ServiceStatus>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ListProduct : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_ListProduct() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::protobuf::Empty, ::GrpcApiPractice::ListProductResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::protobuf::Empty, ::GrpcApiPractice::ListProductResponse>* streamer) {
                       return this->StreamedListProduct(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_ListProduct() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ListProduct(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::GrpcApiPractice::ListProductResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedListProduct(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::GrpcApiPractice::ListProductResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CreateProduct<WithStreamedUnaryMethod_ListProduct<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CreateProduct<WithStreamedUnaryMethod_ListProduct<Service > > StreamedService;
};

}  // namespace GrpcApiPractice


#endif  // GRPC_Services_2fProductService_2eproto__INCLUDED