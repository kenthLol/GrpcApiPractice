#ifndef D7D1C89D_C23B_4E9F_B057_2F464120072D
#define D7D1C89D_C23B_4E9F_B057_2F464120072D

#include <memory>

namespace GrpcApiPractice
{
    class Database;

    class InvoiceRepository : public std::enable_shared_from_this<InvoiceRepository>
    {
    public:
        InvoiceRepository(const std::shared_ptr<Database> &database);
        std::shared_ptr<InvoiceRepository> GetPointer();
        static std::shared_ptr<InvoiceRepository> Create(const std::shared_ptr<Database> &database);

    private:
        std::shared_ptr<Database> m_Database;
    };
}

#endif /* D7D1C89D_C23B_4E9F_B057_2F464120072D */
