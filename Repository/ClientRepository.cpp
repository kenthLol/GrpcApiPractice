#include "ClientRepository.hpp"

namespace GrpcApiPractice
{
    ClientRepository::ClientRepository(const std::shared_ptr<Database> &database)
        : m_Database(database)
    {
    }

    std::shared_ptr<ClientRepository> ClientRepository::GetPointer()
    {
        return shared_from_this();
    }

    std::shared_ptr<ClientRepository> ClientRepository::Create(const std::shared_ptr<Database> &database)
    {
        return std::make_shared<ClientRepository>(database);
    }

    void ClientRepository::AddClient(const Models::Client &client)
    {
    }

    void ClientRepository::UpdateClient(const uint64_t id, const Models::Client &client)
    {
    }

    void ClientRepository::DeleteClientById(const uint64_t id)
    {
    }

    std::optional<Models::Client> ClientRepository::FindClientById(const uint64_t id)
    {
        return {};
    }
}