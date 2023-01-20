#ifndef AB42B0B5_9979_4526_A0F5_E975DA7D2B2B
#define AB42B0B5_9979_4526_A0F5_E975DA7D2B2B

#include "Client.hpp"
#include "InvoiceDetails.hpp"
#include <vector>

namespace GrpcApiPractice::Models
{
    struct Invoice
    {
        uint64_t id;
        std::string name;
        std::string address;
        std::vector<std::weak_ptr<InvoiceDetails>> invoice_details;
        std::weak_ptr<Client> client;
    };
}

#endif /* AB42B0B5_9979_4526_A0F5_E975DA7D2B2B */
