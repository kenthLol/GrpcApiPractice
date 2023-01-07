#ifndef B19976FD_1D28_44CA_BAA2_D0C487257C46
#define B19976FD_1D28_44CA_BAA2_D0C487257C46

#include <string>
#include <vector>

#include "Models/Product.grpc.pb.h"
#include "Services/ProductService.grpc.pb.h"
#include <grpc++/grpc++.h>


struct Product
{
    uint64_t Id;
    std::string Name;
    double Price;
};

class ProductService final: public GrpcApiPractice::ProductService::Service
{
public:
virtual ::grpc::Status CreateProduct(::grpc::ServerContext* context, const ::GrpcApiPractice::Product* request, ::GrpcApiPractice::ServiceStatus* response) override
{
    Product product = {
            request->id(),
            request->name(),
            request->price()
        };

        Products.emplace_back(product);

        response->set_is_success(true);
        return ::grpc::Status::OK;
}
virtual ::grpc::Status ListProduct(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListProductResponse* response) override
{
    for (const auto &product : Products)
        {
            auto grpc_product = response->add_products();
            grpc_product->set_id(product.Id);
            grpc_product->set_name(product.Name);
            grpc_product->set_price(product.Price);
        }

        return ::grpc::Status::OK;
}

private:
    std::vector<Product> Products;
};

#endif /* B19976FD_1D28_44CA_BAA2_D0C487257C46 */
