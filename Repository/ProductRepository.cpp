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

    std::weak_ptr<Models::Product> ProductRepository::AddProduct(const Models::Product &product)
    {
        auto new_product = std::make_shared<Models::Product>(product);
        m_Product.emplace_back(new_product);
        return new_product;
    }

    void ProductRepository::UpdateProduct(const uint64_t id, const Models::Product &product)
    {
        for (auto &product : m_Product)
        {
            if (product->Id == id)
            {
                product->Name = product->Name;
                product->Price = product->Price;
                break;
            }
        }
    }

    void ProductRepository::DeleteProductById(const uint64_t id)
    {
        auto aux = std::find_if(m_Product.begin(), m_Product.end(), [&](value_type &product)
                                { return product->Id == product->Id; });

        if (aux != m_Product.end())
        {
            m_Product.erase(aux);
        }
    }

    std::optional<std::weak_ptr<Models::Product>> ProductRepository::FindProductById(const uint64_t id)
    {
        for (const auto &product : m_Product)
        {
            if (product->Id == id)
            {
                return product;
            }
        }
        return std::nullopt;
    }

    ProductRepository::iterator ProductRepository::begin()
    {
        return m_Product.begin();
    }

    ProductRepository::iterator ProductRepository::end()
    {
        return m_Product.end();
    }
}