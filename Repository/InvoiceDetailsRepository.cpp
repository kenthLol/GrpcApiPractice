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
}