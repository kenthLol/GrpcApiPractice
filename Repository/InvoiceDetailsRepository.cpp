#include "InvoiceDetailsRepository.hpp"

namespace GrpcApiPractice
{
    InvoiceDetailsRepository::InvoiceDetailsRepository(const std::shared_ptr<Database> &database)
        : m_Database(database)
    {
    }

    std::shared_ptr<InvoiceDetailsRepository> InvoiceDetailsRepository::GetPointer()
    {
        return shared_from_this();
    }

    std::shared_ptr<InvoiceDetailsRepository> InvoiceDetailsRepository::Create(const std::shared_ptr<Database> &database)
    {
        return std::make_shared<InvoiceDetailsRepository>(database);
    }

    std::weak_ptr<Models::InvoiceDetails> InvoiceDetailsRepository::AddInvoiceDetails(const Models::InvoiceDetails &invoice_details)
    {
        std::shared_ptr<Models::InvoiceDetails> new_details = std::make_shared<Models::InvoiceDetails>(invoice_details);
        m_InvoiceDetails.emplace_back(new_details);
        return new_details;
    }

    InvoiceDetailsRepository::iterator InvoiceDetailsRepository::begin()
    {
        return m_InvoiceDetails.begin();
    }

    InvoiceDetailsRepository::iterator InvoiceDetailsRepository::end()
    {
        return m_InvoiceDetails.end();
    }
}