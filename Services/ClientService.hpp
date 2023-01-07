#ifndef F15A8DE4_F933_4EEA_B266_B38EFECA3F48
#define F15A8DE4_F933_4EEA_B266_B38EFECA3F48

#include <string>
#include <vector>

#include "Models/Client.grpc.pb.h"
#include "Services/ClientService.grpc.pb.h"
#include <grpc++/grpc++.h>

struct Client
{
    uint64_t Id;
    std::string Name;
    std::string Phone;
    std::string Email;
};

class ClientService final: public GrpcApiPractice::ClientService::Service
{
public:
    virtual ::grpc::Status CreateClient(::grpc::ServerContext* context, const ::GrpcApiPractice::Client* request, ::GrpcApiPractice::ServiceStatus* response) override
    {
        Client client = {
            request->id(),
            request->name(),
            request->phone(),
            request->email()
        };

        Clients.emplace_back(client);

        response->set_is_success(true);
        return ::grpc::Status::OK;
    }

    virtual ::grpc::Status ListClient(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::GrpcApiPractice::ListClientResponse* response) override
    {
        for (const auto &client : Clients)
        {
            auto grpc_client = response->add_client();
            grpc_client->set_id(client.Id);
            grpc_client->set_name(client.Name);
            grpc_client->set_phone(client.Phone);
            grpc_client->set_email(client.Email);
        }

        return ::grpc::Status::OK;
    }
private:
    std::vector<Client> Clients;
};

#endif /* F15A8DE4_F933_4EEA_B266_B38EFECA3F48 */
