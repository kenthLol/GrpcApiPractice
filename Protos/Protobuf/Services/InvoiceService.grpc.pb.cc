// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Services/InvoiceService.proto

#include "Services/InvoiceService.pb.h"
#include "Services/InvoiceService.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace GrpcApiPractice {

static const char* InvoiceService_method_names[] = {
  "/GrpcApiPractice.InvoiceService/CreateInvoice",
  "/GrpcApiPractice.InvoiceService/ListInvoice",
  "/GrpcApiPractice.InvoiceService/ListInvoiceById",
};

std::unique_ptr< InvoiceService::Stub> InvoiceService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< InvoiceService::Stub> stub(new InvoiceService::Stub(channel, options));
  return stub;
}

InvoiceService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_CreateInvoice_(InvoiceService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListInvoice_(InvoiceService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListInvoiceById_(InvoiceService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status InvoiceService::Stub::CreateInvoice(::grpc::ClientContext* context, const ::GrpcApiPractice::Invoice& request, ::GrpcApiPractice::ServiceStatus* response) {
  return ::grpc::internal::BlockingUnaryCall< ::GrpcApiPractice::Invoice, ::GrpcApiPractice::ServiceStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateInvoice_, context, request, response);
}

void InvoiceService::Stub::async::CreateInvoice(::grpc::ClientContext* context, const ::GrpcApiPractice::Invoice* request, ::GrpcApiPractice::ServiceStatus* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::GrpcApiPractice::Invoice, ::GrpcApiPractice::ServiceStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateInvoice_, context, request, response, std::move(f));
}

void InvoiceService::Stub::async::CreateInvoice(::grpc::ClientContext* context, const ::GrpcApiPractice::Invoice* request, ::GrpcApiPractice::ServiceStatus* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateInvoice_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>* InvoiceService::Stub::PrepareAsyncCreateInvoiceRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::Invoice& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::GrpcApiPractice::ServiceStatus, ::GrpcApiPractice::Invoice, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateInvoice_, context, request);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>* InvoiceService::Stub::AsyncCreateInvoiceRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::Invoice& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateInvoiceRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InvoiceService::Stub::ListInvoice(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::GrpcApiPractice::ListInvoiceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::GrpcApiPractice::ListInvoiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListInvoice_, context, request, response);
}

void InvoiceService::Stub::async::ListInvoice(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListInvoiceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::GrpcApiPractice::ListInvoiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListInvoice_, context, request, response, std::move(f));
}

void InvoiceService::Stub::async::ListInvoice(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListInvoiceResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListInvoice_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListInvoiceResponse>* InvoiceService::Stub::PrepareAsyncListInvoiceRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::GrpcApiPractice::ListInvoiceResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListInvoice_, context, request);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListInvoiceResponse>* InvoiceService::Stub::AsyncListInvoiceRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListInvoiceRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InvoiceService::Stub::ListInvoiceById(::grpc::ClientContext* context, const ::GrpcApiPractice::InvoiceByIdRequest& request, ::GrpcApiPractice::ListInvoiceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::GrpcApiPractice::InvoiceByIdRequest, ::GrpcApiPractice::ListInvoiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListInvoiceById_, context, request, response);
}

void InvoiceService::Stub::async::ListInvoiceById(::grpc::ClientContext* context, const ::GrpcApiPractice::InvoiceByIdRequest* request, ::GrpcApiPractice::ListInvoiceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::GrpcApiPractice::InvoiceByIdRequest, ::GrpcApiPractice::ListInvoiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListInvoiceById_, context, request, response, std::move(f));
}

void InvoiceService::Stub::async::ListInvoiceById(::grpc::ClientContext* context, const ::GrpcApiPractice::InvoiceByIdRequest* request, ::GrpcApiPractice::ListInvoiceResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListInvoiceById_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListInvoiceResponse>* InvoiceService::Stub::PrepareAsyncListInvoiceByIdRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::InvoiceByIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::GrpcApiPractice::ListInvoiceResponse, ::GrpcApiPractice::InvoiceByIdRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListInvoiceById_, context, request);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListInvoiceResponse>* InvoiceService::Stub::AsyncListInvoiceByIdRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::InvoiceByIdRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListInvoiceByIdRaw(context, request, cq);
  result->StartCall();
  return result;
}

InvoiceService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceService::Service, ::GrpcApiPractice::Invoice, ::GrpcApiPractice::ServiceStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::GrpcApiPractice::Invoice* req,
             ::GrpcApiPractice::ServiceStatus* resp) {
               return service->CreateInvoice(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceService::Service, ::google::protobuf::Empty, ::GrpcApiPractice::ListInvoiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::GrpcApiPractice::ListInvoiceResponse* resp) {
               return service->ListInvoice(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceService::Service, ::GrpcApiPractice::InvoiceByIdRequest, ::GrpcApiPractice::ListInvoiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::GrpcApiPractice::InvoiceByIdRequest* req,
             ::GrpcApiPractice::ListInvoiceResponse* resp) {
               return service->ListInvoiceById(ctx, req, resp);
             }, this)));
}

InvoiceService::Service::~Service() {
}

::grpc::Status InvoiceService::Service::CreateInvoice(::grpc::ServerContext* context, const ::GrpcApiPractice::Invoice* request, ::GrpcApiPractice::ServiceStatus* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InvoiceService::Service::ListInvoice(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListInvoiceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InvoiceService::Service::ListInvoiceById(::grpc::ServerContext* context, const ::GrpcApiPractice::InvoiceByIdRequest* request, ::GrpcApiPractice::ListInvoiceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace GrpcApiPractice

