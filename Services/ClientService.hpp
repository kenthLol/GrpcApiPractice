#ifndef F15A8DE4_F933_4EEA_B266_B38EFECA3F48
#define F15A8DE4_F933_4EEA_B266_B38EFECA3F48

#include <string>
#include <vector>

#include "Repository/Database.hpp"
#include "Repository/ClientRepository.hpp"
#include "Models/Client.grpc.pb.h"
#include "Models/Client.hpp"
#include "Services/ClientService.grpc.pb.h"
#include <grpc++/grpc++.h>

class ClientService final : public GrpcApiPractice::ClientService::Service
{
public:
    ClientService(const std::shared_ptr<GrpcApiPractice::Database> &database);

    virtual ::grpc::Status CreateClient(::grpc::ServerContext *context, const ::GrpcApiPractice::Client *request, ::GrpcApiPractice::ServiceStatus *response) override;
    virtual ::grpc::Status ListClient(::grpc::ServerContext *context, const ::google::protobuf::Empty *request, ::GrpcApiPractice::ListClientResponse *response) override;
    virtual ::grpc::Status ListClientById(::grpc::ServerContext *context, const ::GrpcApiPractice::ClientByIdRequest *request, ::GrpcApiPractice::ListClientResponse *response) override;

private:
    std::shared_ptr<GrpcApiPractice::Database> m_Database;
};

#endif /* F15A8DE4_F933_4EEA_B266_B38EFECA3F48 */
