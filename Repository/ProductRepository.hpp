#ifndef C8750FF4_E147_4FB5_AD2A_8B431BB384A5
#define C8750FF4_E147_4FB5_AD2A_8B431BB384A5

#include <memory>

namespace GrpcApiPractice
{
    class Database;

    class ProductRepository: public std::enable_shared_from_this<ProductRepository>
    {
    public:
        ProductRepository(const std::shared_ptr<Database> &database);
        std::shared_ptr<ProductRepository> GetPointer();
        static std::shared_ptr<ProductRepository> Create(const std::shared_ptr<Database> &database);

    private:
        std::shared_ptr<Database> m_Database;
    };
}

#endif /* C8750FF4_E147_4FB5_AD2A_8B431BB384A5 */
