#include "ClientService.hpp"

ClientService::ClientService(const std::shared_ptr<GrpcApiPractice::Database> &database)
    : m_Database(database)
{
}

::grpc::Status ClientService::CreateClient(::grpc::ServerContext *context, const ::GrpcApiPractice::Client *request, ::GrpcApiPractice::ServiceStatus *response)
{
    // Client client = {
    //     .Id(request->id()),
    //     .Name(request->name()),
    //     .Phone(request->phone()),
    //     .Email(request->email())};
    // Client client{
    //     request->id(),
    //     request->name(),
    //     request->phone(),
    //     request->email()};

    // m_Database->Clients.AddClient(client);
    return ::grpc::Status::OK;
}

::grpc::Status ClientService::ListClient(::grpc::ServerContext *context, const ::google::protobuf::Empty *request, ::GrpcApiPractice::ListClientResponse *response)
{
    return ::grpc::Status::OK;
}