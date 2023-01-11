#ifndef B19976FD_1D28_44CA_BAA2_D0C487257C46
#define B19976FD_1D28_44CA_BAA2_D0C487257C46

#include <string>
#include <vector>

#include "Models/Product.grpc.pb.h"
#include "Repository/Database.hpp"
#include "Services/ProductService.grpc.pb.h"
#include <grpc++/grpc++.h>

class ProductService final : public GrpcApiPractice::ProductService::Service
{
public:
    ProductService(const std::shared_ptr<GrpcApiPractice::Database> &database);
    virtual ::grpc::Status
    CreateProduct(::grpc::ServerContext *context,
                  const ::GrpcApiPractice::Product *request,
                  ::GrpcApiPractice::ServiceStatus *response) override;
    virtual ::grpc::Status
    ListProduct(::grpc::ServerContext *context,
                const ::google::protobuf::Empty *request,
                ::GrpcApiPractice::ListProductResponse *response) override;

private:
    std::shared_ptr<GrpcApiPractice::Database> m_Database;
};
// namespace GrpcApiPractice

#endif /* B19976FD_1D28_44CA_BAA2_D0C487257C46 */
