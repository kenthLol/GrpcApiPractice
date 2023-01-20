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

    std::weak_ptr<GrpcApiPractice::Models::Client> ClientRepository::AddClient(const Models::Client &client)
    {
        auto new_client = std::make_shared<Models::Client>(client);
        m_Client.emplace_back(new_client);
        return new_client;
    }

    void ClientRepository::UpdateClient(const uint64_t id, const Models::Client &client)
    {
        for (auto &customer : m_Client)
        {
            if (customer->Id == id)
            {
                customer->Name = client.Name;
                customer->Phone = client.Phone;
                customer->Email = client.Email;
                break;
            }
        }
    }

    void ClientRepository::DeleteClientById(const uint64_t id)
    {
        auto aux = std::find_if(m_Client.begin(), m_Client.end(), [&](value_type &client)
                                { return client->Id == client->Id; });

        if (aux != m_Client.end())
        {
            m_Client.erase(aux);
        }
    }

    std::optional<std::weak_ptr<Models::Client>> ClientRepository::FindClientById(const uint64_t id)
    {
        for (const auto &client : m_Client)
        {
            if (client->Id == id)
            {
                return client;
            }
        }
        return std::nullopt;
    }

    ClientRepository::iterator ClientRepository::begin()
    {
        return m_Client.begin();
    }

    ClientRepository::iterator ClientRepository::end()
    {
        return m_Client.end();
    }
}