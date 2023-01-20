#include "InvoiceService.hpp"

InvoiceService::InvoiceService(const std::shared_ptr<GrpcApiPractice::Database> &database)
    : m_Database(database)
{
}

::grpc::Status InvoiceService::CreateInvoice(::grpc::ServerContext *context, const ::GrpcApiPractice::Invoice *request, ::GrpcApiPractice::ServiceStatus *response)
{
    std::optional<std::weak_ptr<Models::Client>> client = m_Database->Clients()->FindClientById(response->client().id());

    if (client == std::nullopt)
    {
        GrpcApiPractice::Models::Client new_client;
        new_client.Id = request->id();
        new_client.Name = request->name();
        new_client.Phone = request->phone();
        new_client.Email = request->email();

        client = m_Database->Clients()->AddClient(new_client);
    }

    GrpcApiPractice::Models::Invoice new_invoice;
    new_invoice.id = request->id();
    new_invoice.name = request->name();
    new_invoice.address = request->address();
    new_invoice.client = *client;

    // for (const ::GrpcApiPractice::InvoiceDetails &details : request->invoice_details())
    // {
    // }

    response->set_is_success(true);
    response->set_error_message("Invoice Not Created");

    return ::grpc::Status(grpc::StatusCode::OK, "Invoice_created");
}

::grpc::Status InvoiceService::ListInvoice(::grpc::ServerContext *context, const ::google::protobuf::Empty *request, ::GrpcApiPractice::ListInvoiceResponse *response)
{
    return ::grpc::Status::OK;
}

::grpc::Status InvoiceService::ListInvoiceById(::grpc::ServerContext *context, const ::GrpcApiPractice::InvoiceByIdRequest *request, ::GrpcApiPractice::ListInvoiceResponse *response)
{
    return ::grpc::Status::OK;
}