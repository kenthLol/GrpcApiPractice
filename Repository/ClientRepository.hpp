#ifndef D2DDFE6B_FB11_47FD_AAD3_DFC04971C7A1
#define D2DDFE6B_FB11_47FD_AAD3_DFC04971C7A1

#include <memory>
#include <list>
#include <optional>
#include "Models/Client.hpp"

namespace GrpcApiPractice
{
    class Database;

    class ClientRepository : public std::enable_shared_from_this<ClientRepository>
    {
    public:
        using value_type = Models::Client;
        using size_type = std::size_t;
        using difference_type = std::ptrdiff_t;
        using reference = value_type &;
        using const_reference = const value_type &;
        using pointer = value_type *;
        using const_pointer = const value_type *;
        using iterator = void;
        using const_iterator = void;

        ClientRepository(const std::shared_ptr<Database> &database);
        std::shared_ptr<ClientRepository> GetPointer();
        static std::shared_ptr<ClientRepository> Create(const std::shared_ptr<Database> &database);
        void AddClient(const Models::Client &client);
        void UpdateClient(const uint64_t id, const Models::Client &client);
        void DeleteClientById(const uint64_t id);
        std::optional<Models::Client> FindClientById(const uint64_t id);

    private:
        std::shared_ptr<Database> m_Database;
        std::list<Models::Client> m_Client;
    };
}
#endif /* D2DDFE6B_FB11_47FD_AAD3_DFC04971C7A1 */
