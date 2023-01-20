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
        m_Invoice.emplace_back(std::make_shared<Models::Invoice>(invoice));
    }

    // void InvoiceRepository::UpdateInvoice(const uint64_t id, const Models::Invoice &invoice)
    // {
    //     for (auto &bill : m_Invoice)
    //     {
    //         if (invoice.id == id)
    //         {
    //             bill.name = invoice.name;
    //             bill.address = invoice.address;
    //             bill.invoice_details.product = invoice.invoice_details.product;
    //             bill.invoice_details.deduction = invoice.invoice_details.deduction;
    //             bill.invoice_details.quantity = invoice.invoice_details.quantity;
    //             bill.invoice_details.total = invoice.invoice_details.total;
    //             break;
    //         }
    //     }
    // }

    void InvoiceRepository::DeleteInvoiceById(const uint64_t id)
    {
        auto aux = std::find_if(m_Invoice.begin(), m_Invoice.end(), [&](value_type &invoice)
                                { return invoice->id == invoice->id; });

        if (aux != m_Invoice.end())
        {
            m_Invoice.erase(aux);
        }
    }

    std::optional<std::weak_ptr<Models::Invoice>> InvoiceRepository::FindInvoiceById(const uint64_t id)
    {
        for (const auto &invoice : m_Invoice)
        {
            if (invoice->id == id)
            {
                return invoice;
            }
        }
        return std::nullopt;
    }

    InvoiceRepository::iterator InvoiceRepository::begin()
    {
        return m_Invoice.begin();
    }

    InvoiceRepository::iterator InvoiceRepository::end()
    {
        return m_Invoice.end();
    }
}