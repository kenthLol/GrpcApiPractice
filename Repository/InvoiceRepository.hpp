#ifndef D7D1C89D_C23B_4E9F_B057_2F464120072D
#define D7D1C89D_C23B_4E9F_B057_2F464120072D

#include <list>
#include <optional>
#include <memory>
#include <algorithm>
#include "Models/Invoice.hpp"

namespace GrpcApiPractice
{
    class Database;

    class InvoiceRepository : public std::enable_shared_from_this<InvoiceRepository>
    {
    public:
        using value_type = std::shared_ptr<Models::Invoice>;
        using size_type = std::size_t;
        using difference_type = std::ptrdiff_t;
        using reference = value_type &;
        using const_reference = const value_type &;
        using pointer = value_type;
        using const_pointer = value_type;
        using iterator = std::list<value_type>::iterator;
        using const_iterator = std::list<value_type>::const_iterator;

        InvoiceRepository(const std::shared_ptr<Database> &database);
        std::shared_ptr<InvoiceRepository> GetPointer();
        static std::shared_ptr<InvoiceRepository> Create(const std::shared_ptr<Database> &database);
        void AddInvoice(const Models::Invoice &invoice);
        void UpdateInvoice(const uint64_t id, const Models::Invoice &invoice);
        void DeleteInvoiceById(const uint64_t id);
        std::optional<std::weak_ptr<Models::Invoice>> FindInvoiceById(const uint64_t id);

        iterator begin();
        iterator end();

    private:
        std::shared_ptr<Database> m_Database;
        std::list<std::shared_ptr<Models::Invoice>> m_Invoice;
    };
}

#endif /* D7D1C89D_C23B_4E9F_B057_2F464120072D */
