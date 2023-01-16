#include "InvoiceRepository.hpp"

namespace GrpcApiPractice
{
    InvoiceRepository::InvoiceRepository(const std::shared_ptr<Database> &database)
        : m_Database(database)
    {
    }

    std::shared_ptr<InvoiceRepository> InvoiceRepository::GetPointer()
    {
        return shared_from_this();
    }

    std::shared_ptr<InvoiceRepository> InvoiceRepository::Create(const std::shared_ptr<Database> &database)
    {
        return std::make_shared<InvoiceRepository>(database);
    }

    void InvoiceRepository::AddInvoice(const Models::Invoice &invoice)
    {
    }

    void InvoiceRepository::UpdateInvoice(const uint64_t id, const Models::Invoice &invoice)
    {
    }

    void InvoiceRepository::DeleteInvoiceById(const uint64_t id)
    {
    }

    std::optional<Models::Invoice> InvoiceRepository::FindInvoiceById(const uint64_t id)
    {
        return {};
    }
}