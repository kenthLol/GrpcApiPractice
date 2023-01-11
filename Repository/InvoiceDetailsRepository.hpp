#ifndef D26F114A_D68E_4941_8078_8C080151D7A7
#define D26F114A_D68E_4941_8078_8C080151D7A7

#include <memory>

namespace GrpcApiPractice
{
    class Database;

    class InvoiceDetailsRepository : public std::enable_shared_from_this<InvoiceDetailsRepository>
    {
    public:
        InvoiceDetailsRepository(const std::shared_ptr<Database> &database);
        std::shared_ptr<InvoiceDetailsRepository> GetPointer();
        static std::shared_ptr<InvoiceDetailsRepository> Create(const std::shared_ptr<Database> &database);
    
    private:
        std::shared_ptr<Database> m_Database;
    };
}

#endif /* D26F114A_D68E_4941_8078_8C080151D7A7 */
