cmake_minimum_required(VERSION 3.24)

project(GrpcApiPractice C CXX)

include(CMake/GenerateProtobuf.cmake)

find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)

find_program(grpc_cpp_plugin_executable grpc_cpp_plugin)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Models/Client.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Models/Invoice.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Models/InvoiceDetails.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Models/Product.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Models/ServiceStatus.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Services/ClientService.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Services/ProductService.proto
)

GenerateProtobuf(
  ${CMAKE_SOURCE_DIR}/Protos # --proto_path
  ${CMAKE_SOURCE_DIR}/Protos/Protobuf # --cpp_out / --grpc_out
  Services/InvoiceService.proto
)

add_executable(
    ${PROJECT_NAME}
    Main.cpp
    Repository/ClientRepository.cpp
    Repository/ClientRepository.hpp
    Repository/InvoiceDetailsRepository.cpp
    Repository/InvoiceDetailsRepository.hpp
    Repository/InvoiceRepository.cpp
    Repository/InvoiceRepository.hpp
    Repository/ProductRepository.cpp
    Repository/ProductRepository.hpp
    Repository/Database.cpp
    Repository/Database.hpp
    Services/ClientService.cpp
    Services/ClientService.hpp
    Services/ProductService.cpp
    Services/ProductService.hpp
    Protos/Protobuf/Models/Client.grpc.pb.cc
    Protos/Protobuf/Models/Client.grpc.pb.h
    Protos/Protobuf/Models/Client.pb.h
    Protos/Protobuf/Models/Client.pb.cc
    Protos/Protobuf/Models/Invoice.grpc.pb.cc
    Protos/Protobuf/Models/Invoice.grpc.pb.h
    Protos/Protobuf/Models/Invoice.pb.h
    Protos/Protobuf/Models/Invoice.pb.cc
    Protos/Protobuf/Models/InvoiceDetails.grpc.pb.cc
    Protos/Protobuf/Models/InvoiceDetails.grpc.pb.h
    Protos/Protobuf/Models/InvoiceDetails.pb.h
    Protos/Protobuf/Models/InvoiceDetails.pb.cc
    Protos/Protobuf/Models/Product.grpc.pb.cc
    Protos/Protobuf/Models/Product.grpc.pb.h
    Protos/Protobuf/Models/Product.pb.h
    Protos/Protobuf/Models/Product.pb.cc
    Protos/Protobuf/Models/ServiceStatus.grpc.pb.cc
    Protos/Protobuf/Models/ServiceStatus.pb.h
    Protos/Protobuf/Models/ServiceStatus.pb.h
    Protos/Protobuf/Models/ServiceStatus.pb.cc
    Protos/Protobuf/Services/ClientService.grpc.pb.cc
    Protos/Protobuf/Services/ClientService.grpc.pb.h
    Protos/Protobuf/Services/ClientService.pb.cc
    Protos/Protobuf/Services/ClientService.pb.h
    Protos/Protobuf/Services/ProductService.grpc.pb.cc
    Protos/Protobuf/Services/ProductService.grpc.pb.h
    Protos/Protobuf/Services/ProductService.pb.cc
    Protos/Protobuf/Services/ProductService.pb.h
    Protos/Protobuf/Services/InvoiceService.grpc.pb.cc
    Protos/Protobuf/Services/InvoiceService.grpc.pb.h
    Protos/Protobuf/Services/InvoiceService.pb.cc
    Protos/Protobuf/Services/InvoiceService.pb.h
)

target_link_libraries(
  ${PROJECT_NAME}
  PUBLIC
    protobuf::libprotobuf
    gRPC::grpc++
    gRPC::grpc++_reflection
)

target_include_directories(${PROJECT_NAME} 
    PRIVATE
      Protos/Protobuf
      ${CMAKE_SOURCE_DIR}
)

target_compile_features(
    ${PROJECT_NAME}
    PUBLIC
        c_std_23
        cxx_std_23
)