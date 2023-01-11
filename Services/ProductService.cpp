#include "ProductService.hpp"

ProductService::ProductService(const std::shared_ptr<GrpcApiPractice::Database> &database)
    : m_Database(database)
{
}

::grpc::Status ProductService::CreateProduct(::grpc::ServerContext *context, const ::GrpcApiPractice::Product *request, ::GrpcApiPractice::ServiceStatus *response)
{
    return ::grpc::Status::OK;
}

::grpc::Status ProductService::ListProduct(::grpc::ServerContext *context, const ::google::protobuf::Empty *request, ::GrpcApiPractice::ListProductResponse *response)
{
    return ::grpc::Status::OK;
}