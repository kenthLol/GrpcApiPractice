#include "ProductService.hpp"

ProductService::ProductService(const std::shared_ptr<GrpcApiPractice::Database> &database)
    : m_Database(database)
{
}

::grpc::Status ProductService::CreateProduct(::grpc::ServerContext *context, const ::GrpcApiPractice::Product *request, ::GrpcApiPractice::ServiceStatus *response)
{
    GrpcApiPractice::Models::Product product;
    product.Id = request->id();
    product.Name = request->name();
    product.Price = request->price();

    m_Database->Products()->AddProduct(product);
    response->set_is_success(true);
    response->set_error_message("Product Created");

    return ::grpc::Status(grpc::StatusCode::OK, "Product_created");
}

::grpc::Status ProductService::ListProduct(::grpc::ServerContext *context, const ::google::protobuf::Empty *request, ::GrpcApiPractice::ListProductResponse *response)
{
    for (const auto &product : *m_Database->Products())
    {
        auto grpc_product = response->add_products();
        grpc_product->set_id(product->Id);
        grpc_product->set_name(product->Name);
        grpc_product->set_price(product->Price);
    }

    return ::grpc::Status::OK;
}

::grpc::Status ProductService::ListProductById(::grpc::ServerContext *context, const ::GrpcApiPractice::ProductByIdRequest *request, ::GrpcApiPractice::ListProductResponse *response)
{
    const uint64_t id = request->product_id();
    auto result = m_Database->Products()->FindProductById(id);

    if (result.has_value())
    {
        auto product = result.value().lock();
        auto new_product = response->add_products();
        new_product->set_id(product->Id);
        new_product->set_name(product->Name);
        new_product->set_price(product->Price);

        return ::grpc::Status::OK;
    }

    return ::grpc::Status(grpc::StatusCode::NOT_FOUND, "Product not found");
}