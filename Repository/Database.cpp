#include "Database.hpp"

namespace GrpcApiPractice
{
    Database::Database()
        : m_Clients(ClientRepository::Create(GetPointer())) //
          ,
          m_Products(ProductRepository::Create(GetPointer())) //
          ,
          m_Invoices(InvoiceRepository::Create(GetPointer())) //
          ,
          m_InvoiceDetails(InvoiceDetailsRepository::Create(GetPointer()))
    {
    }

    std::shared_ptr<Database> Database::GetPointer()
    {
        return shared_from_this();
    }

    std::shared_ptr<Database> Database::Create()
    {
        return std::make_shared<Database>();
    }

    std::shared_ptr<ClientRepository> Database::Clients()
    {
        return m_Clients->GetPointer();
    }

    std::shared_ptr<ProductRepository> Database::Products()
    {
        return m_Products->GetPointer();
    }

    std::shared_ptr<InvoiceRepository> Database::Invoices()
    {
        return m_Invoices->GetPointer();
    }

    std::shared_ptr<InvoiceDetailsRepository> Database::InvoiceDetails()
    {
        return m_InvoiceDetails->GetPointer();
    }
}