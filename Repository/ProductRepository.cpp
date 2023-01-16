#include "ProductRepository.hpp"

namespace GrpcApiPractice
{
    ProductRepository::ProductRepository(const std::shared_ptr<Database> &database)
        : m_Database(database)
    {
    }

    std::shared_ptr<ProductRepository> ProductRepository::GetPointer()
    {
        return shared_from_this();
    }

    std::shared_ptr<ProductRepository> ProductRepository::Create(const std::shared_ptr<Database> &database)
    {
        return std::make_shared<ProductRepository>(database);
    }

    void ProductRepository::AddProduct(const Models::Product &product)
    {
    }

    void ProductRepository::UpdateProduct(const uint64_t id, const Models::Product &product)
    {
    }

    void ProductRepository::DeleteProductById(const uint64_t id)
    {
    }

    std::optional<Models::Product> ProductRepository::FindProductById(const uint64_t id)
    {
        return {};
    }
}