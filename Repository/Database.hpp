#ifndef EA2AD668_641C_4501_A8E3_2E80D90270FE
#define EA2AD668_641C_4501_A8E3_2E80D90270FE

#include "ClientRepository.hpp"
#include "ProductRepository.hpp"
#include "InvoiceRepository.hpp"
#include "InvoiceDetailsRepository.hpp"

namespace GrpcApiPractice
{
    class Database : public std::enable_shared_from_this<Database>
    {
    public:
        Database();
        std::shared_ptr<Database> GetPointer();
        static std::shared_ptr<Database> Create();

        std::shared_ptr<ClientRepository> Clients();
        std::shared_ptr<ProductRepository> Products();
        std::shared_ptr<InvoiceRepository> Invoices();
        std::shared_ptr<InvoiceDetailsRepository> InvoiceDetails();

    private:
        std::shared_ptr<ClientRepository> m_Clients;
        std::shared_ptr<ProductRepository> m_Products;
        std::shared_ptr<InvoiceRepository> m_Invoices;
        std::shared_ptr<InvoiceDetailsRepository> m_InvoiceDetails;
    };
}

#endif /* EA2AD668_641C_4501_A8E3_2E80D90270FE */
