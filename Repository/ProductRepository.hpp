#ifndef C8750FF4_E147_4FB5_AD2A_8B431BB384A5
#define C8750FF4_E147_4FB5_AD2A_8B431BB384A5

#include <list>
#include <optional>
#include <memory>
#include <algorithm>
#include "Models/Product.hpp"

namespace GrpcApiPractice
{
    class Database;

    class ProductRepository : public std::enable_shared_from_this<ProductRepository>
    {
    public:
        using value_type = std::shared_ptr<Models::Product>;
        using size_type = std::size_t;
        using difference_type = std::ptrdiff_t;
        using reference = value_type &;
        using const_reference = const value_type &;
        using pointer = value_type;
        using const_pointer = value_type;
        using iterator = std::list<value_type>::iterator;
        using const_iterator = std::list<value_type>::const_iterator;

        ProductRepository(const std::shared_ptr<Database> &database);
        std::shared_ptr<ProductRepository> GetPointer();
        static std::shared_ptr<ProductRepository> Create(const std::shared_ptr<Database> &database);
        std::weak_ptr<Models::Product> AddProduct(const Models::Product &product);
        void UpdateProduct(const uint64_t id, const Models::Product &product);
        void DeleteProductById(const uint64_t id);
        std::optional<std::weak_ptr<Models::Product>> FindProductById(const uint64_t id);

        iterator begin();
        iterator end();

    private:
        std::shared_ptr<Database> m_Database;
        std::list<std::shared_ptr<Models::Product>> m_Product;
    };
}

#endif /* C8750FF4_E147_4FB5_AD2A_8B431BB384A5 */
