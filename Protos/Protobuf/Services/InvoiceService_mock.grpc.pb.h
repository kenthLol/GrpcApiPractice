// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Services/InvoiceService.proto

#include "Services/InvoiceService.pb.h"
#include "Services/InvoiceService.grpc.pb.h"

#include <grpcpp/support/async_stream.h>
#include <grpcpp/impl/codegen/sync_stream.h>
#include <gmock/gmock.h>
namespace GrpcApiPractice {

class MockInvoiceServiceStub : public InvoiceService::StubInterface {
 public:
  MOCK_METHOD3(CreateInvoice, ::grpc::Status(::grpc::ClientContext* context, const ::GrpcApiPractice::Invoice& request, ::GrpcApiPractice::ServiceStatus* response));
  MOCK_METHOD3(AsyncCreateInvoiceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ServiceStatus>*(::grpc::ClientContext* context, const ::GrpcApiPractice::Invoice& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCreateInvoiceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ServiceStatus>*(::grpc::ClientContext* context, const ::GrpcApiPractice::Invoice& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(ListInvoice, ::grpc::Status(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::GrpcApiPractice::ListInvoiceResponse* response));
  MOCK_METHOD3(AsyncListInvoiceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListInvoiceResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncListInvoiceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListInvoiceResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(ListInvoiceById, ::grpc::Status(::grpc::ClientContext* context, const ::GrpcApiPractice::InvoiceByIdRequest& request, ::GrpcApiPractice::ListInvoiceResponse* response));
  MOCK_METHOD3(AsyncListInvoiceByIdRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListInvoiceResponse>*(::grpc::ClientContext* context, const ::GrpcApiPractice::InvoiceByIdRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncListInvoiceByIdRaw, ::grpc::ClientAsyncResponseReaderInterface< ::GrpcApiPractice::ListInvoiceResponse>*(::grpc::ClientContext* context, const ::GrpcApiPractice::InvoiceByIdRequest& request, ::grpc::CompletionQueue* cq));
};

} // namespace GrpcApiPractice

