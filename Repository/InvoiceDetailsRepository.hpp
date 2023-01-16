#ifndef D26F114A_D68E_4941_8078_8C080151D7A7
#define D26F114A_D68E_4941_8078_8C080151D7A7

#include <memory>
#include <list>
#include <optional>
#include "Models/InvoiceDetails.hpp"
namespace GrpcApiPractice
{
    class Database;

    class InvoiceDetailsRepository : public std::enable_shared_from_this<InvoiceDetailsRepository>
    {
    public:
        using value_type = Models::InvoiceDetails;
        using size_type = std::size_t;
        using difference_type = std::ptrdiff_t;
        using reference = value_type &;
        using const_reference = const value_type &;
        using pointer = value_type *;
        using const_pointer = const value_type *;
        using iterator = void;
        using const_iterator = void;

        InvoiceDetailsRepository(const std::shared_ptr<Database> &database);
        std::shared_ptr<InvoiceDetailsRepository> GetPointer();
        static std::shared_ptr<InvoiceDetailsRepository> Create(const std::shared_ptr<Database> &database);
        void AddInvoiceDetails(const Models::InvoiceDetails &invoice_details);
        void UpdateInvoiceDetails(const uint64_t id, const Models::InvoiceDetails &invoice_details);
        void DeleteInvoiceDetailsById(const uint64_t id);
        std::optional<Models::InvoiceDetails> FindInvoiceDetailsById(const uint64_t id);

    private:
        std::shared_ptr<Database> m_Database;
        std::list<Models::InvoiceDetails> m_InvoiceDetails;
    };
}

#endif /* D26F114A_D68E_4941_8078_8C080151D7A7 */
