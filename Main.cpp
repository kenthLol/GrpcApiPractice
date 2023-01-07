#include <iostream>
#include <memory>

//Para el servidor
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include "Services/ClientService.hpp"
#include "Services/ProductService.hpp"


int32_t main()
{
    const std::string server_address = "0.0.0.0:8001";
    grpc::EnableDefaultHealthCheckService(true);

    grpc::ServerBuilder server_builder;
    server_builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());

    ClientService client_service;
    server_builder.RegisterService(&client_service);

    ProductService product_service;
    server_builder.RegisterService(&product_service);

    std::unique_ptr<grpc::Server> server{server_builder.BuildAndStart()};
    std::clog << "Server Listening On: " << server_address << std::endl;

    server->Wait();
    return EXIT_SUCCESS;
}