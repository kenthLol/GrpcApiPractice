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
}