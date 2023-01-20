#ifndef F03AC9B6_3076_4E93_82F2_A73852A437BA
#define F03AC9B6_3076_4E93_82F2_A73852A437BA

#include <string>
#include <vector>

#include "Repository/Database.hpp"
#include "Repository/InvoiceRepository.hpp"
#include "Models/Invoice.grpc.pb.h"
#include "Models/Invoice.hpp"
#include "Models/Client.hpp"
#include "Services/InvoiceService.grpc.pb.h"
#include <grpc++/grpc++.h>

class InvoiceService final : public GrpcApiPractice::InvoiceService::Service
{
public:
    InvoiceService(const std::shared_ptr<GrpcApiPractice::Database> &database);
    virtual ::grpc::Status CreateInvoice(::grpc::ServerContext *context, const ::GrpcApiPractice::Invoice *request, ::GrpcApiPractice::ServiceStatus *response) override;
    virtual ::grpc::Status ListInvoice(::grpc::ServerContext *context, const ::google::protobuf::Empty *request, ::GrpcApiPractice::ListInvoiceResponse *response) override;
    virtual ::grpc::Status ListInvoiceById(::grpc::ServerContext *context, const ::GrpcApiPractice::InvoiceByIdRequest *request, ::GrpcApiPractice::ListInvoiceResponse *response) override;

private:
    std::shared_ptr<GrpcApiPractice::Database> m_Database;
};

#endif /* F03AC9B6_3076_4E93_82F2_A73852A437BA */
