#ifndef F1809D20_35F0_4DF1_858B_EBB8096530CB
#define F1809D20_35F0_4DF1_858B_EBB8096530CB

#include "Product.hpp"

namespace GrpcApiPractice::Models
{
    struct Invoice;

    struct InvoiceDetails
    {
        std::weak_ptr<Product> product;
        std::weak_ptr<Invoice> invoice;
        double deduction;
        int64_t quantity;
        int64_t total;
    };

}

#endif /* F1809D20_35F0_4DF1_858B_EBB8096530CB */
