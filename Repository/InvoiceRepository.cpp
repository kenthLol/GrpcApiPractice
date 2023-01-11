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
}