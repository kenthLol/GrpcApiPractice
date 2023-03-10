#include "ClientService.hpp"

ClientService::ClientService(const std::shared_ptr<GrpcApiPractice::Database> &database)
    : m_Database(database)
{
}

::grpc::Status ClientService::CreateClient(::grpc::ServerContext *context, const ::GrpcApiPractice::Client *request, ::GrpcApiPractice::ServiceStatus *response)
{
    GrpcApiPractice::Models::Client client;
    client.Id = request->id();
    client.Name = request->name();
    client.Phone = request->phone();
    client.Email = request->email();

    m_Database->Clients()->AddClient(client);
    response->set_is_success(true);
    response->set_error_message("Client Not Created");

    return ::grpc::Status(grpc::StatusCode::OK, "Client_created");
}

::grpc::Status ClientService::ListClient(::grpc::ServerContext *context, const ::google::protobuf::Empty *request, ::GrpcApiPractice::ListClientResponse *response)
{
    for (const auto &customer : *m_Database->Clients())
    {
        auto grpc_client = response->add_client();
        grpc_client->set_id(customer->Id);
        grpc_client->set_name(customer->Name);
        grpc_client->set_phone(customer->Phone);
        grpc_client->set_email(customer->Email);
    }

    return ::grpc::Status::OK;
}

::grpc::Status ClientService::ListClientById(::grpc::ServerContext *context, const ::GrpcApiPractice::ClientByIdRequest *request, ::GrpcApiPractice::ListClientResponse *response)
{
    const uint64_t id = request->client_id();
    auto result = m_Database->Clients()->FindClientById(id);

    if (result.has_value())
    {
        auto client = result.value().lock();
        auto new_client = response->add_client();
        new_client->set_id(client->Id);
        new_client->set_name(client->Name);
        new_client->set_phone(client->Phone);
        new_client->set_email(client->Email);
        return ::grpc::Status::OK;
    }

    return ::grpc::Status(grpc::StatusCode::NOT_FOUND, "Client not found");
}