// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Services/ClientService.proto

#include "Services/ClientService.pb.h"
#include "Services/ClientService.grpc.pb.h"

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

static const char* ClientService_method_names[] = {
  "/GrpcApiPractice.ClientService/CreateClient",
  "/GrpcApiPractice.ClientService/ListClient",
  "/GrpcApiPractice.ClientService/ListClientById",
};

std::unique_ptr< ClientService::Stub> ClientService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ClientService::Stub> stub(new ClientService::Stub(channel, options));
  return stub;
}

ClientService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_CreateClient_(ClientService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListClient_(ClientService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListClientById_(ClientService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ClientService::Stub::CreateClient(::grpc::ClientContext* context, const ::GrpcApiPractice::Client& request, ::GrpcApiPractice::ServiceStatus* response) {
  return ::grpc::internal::BlockingUnaryCall< ::GrpcApiPractice::Client, ::GrpcApiPractice::ServiceStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateClient_, context, request, response);
}

void ClientService::Stub::async::CreateClient(::grpc::ClientContext* context, const ::GrpcApiPractice::Client* request, ::GrpcApiPractice::ServiceStatus* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::GrpcApiPractice::Client, ::GrpcApiPractice::ServiceStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateClient_, context, request, response, std::move(f));
}

void ClientService::Stub::async::CreateClient(::grpc::ClientContext* context, const ::GrpcApiPractice::Client* request, ::GrpcApiPractice::ServiceStatus* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateClient_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>* ClientService::Stub::PrepareAsyncCreateClientRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::Client& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::GrpcApiPractice::ServiceStatus, ::GrpcApiPractice::Client, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateClient_, context, request);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ServiceStatus>* ClientService::Stub::AsyncCreateClientRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::Client& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateClientRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ClientService::Stub::ListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::GrpcApiPractice::ListClientResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::GrpcApiPractice::ListClientResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListClient_, context, request, response);
}

void ClientService::Stub::async::ListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListClientResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::GrpcApiPractice::ListClientResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListClient_, context, request, response, std::move(f));
}

void ClientService::Stub::async::ListClient(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListClientResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListClient_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListClientResponse>* ClientService::Stub::PrepareAsyncListClientRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::GrpcApiPractice::ListClientResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListClient_, context, request);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListClientResponse>* ClientService::Stub::AsyncListClientRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListClientRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ClientService::Stub::ListClientById(::grpc::ClientContext* context, const ::GrpcApiPractice::ClientByIdRequest& request, ::GrpcApiPractice::ListClientResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::GrpcApiPractice::ClientByIdRequest, ::GrpcApiPractice::ListClientResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListClientById_, context, request, response);
}

void ClientService::Stub::async::ListClientById(::grpc::ClientContext* context, const ::GrpcApiPractice::ClientByIdRequest* request, ::GrpcApiPractice::ListClientResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::GrpcApiPractice::ClientByIdRequest, ::GrpcApiPractice::ListClientResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListClientById_, context, request, response, std::move(f));
}

void ClientService::Stub::async::ListClientById(::grpc::ClientContext* context, const ::GrpcApiPractice::ClientByIdRequest* request, ::GrpcApiPractice::ListClientResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListClientById_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListClientResponse>* ClientService::Stub::PrepareAsyncListClientByIdRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::ClientByIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::GrpcApiPractice::ListClientResponse, ::GrpcApiPractice::ClientByIdRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListClientById_, context, request);
}

::grpc::ClientAsyncResponseReader< ::GrpcApiPractice::ListClientResponse>* ClientService::Stub::AsyncListClientByIdRaw(::grpc::ClientContext* context, const ::GrpcApiPractice::ClientByIdRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListClientByIdRaw(context, request, cq);
  result->StartCall();
  return result;
}

ClientService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ClientService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ClientService::Service, ::GrpcApiPractice::Client, ::GrpcApiPractice::ServiceStatus, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ClientService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::GrpcApiPractice::Client* req,
             ::GrpcApiPractice::ServiceStatus* resp) {
               return service->CreateClient(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ClientService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ClientService::Service, ::google::protobuf::Empty, ::GrpcApiPractice::ListClientResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ClientService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::GrpcApiPractice::ListClientResponse* resp) {
               return service->ListClient(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ClientService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ClientService::Service, ::GrpcApiPractice::ClientByIdRequest, ::GrpcApiPractice::ListClientResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ClientService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::GrpcApiPractice::ClientByIdRequest* req,
             ::GrpcApiPractice::ListClientResponse* resp) {
               return service->ListClientById(ctx, req, resp);
             }, this)));
}

ClientService::Service::~Service() {
}

::grpc::Status ClientService::Service::CreateClient(::grpc::ServerContext* context, const ::GrpcApiPractice::Client* request, ::GrpcApiPractice::ServiceStatus* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ClientService::Service::ListClient(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListClientResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ClientService::Service::ListClientById(::grpc::ServerContext* context, const ::GrpcApiPractice::ClientByIdRequest* request, ::GrpcApiPractice::ListClientResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace GrpcApiPractice

