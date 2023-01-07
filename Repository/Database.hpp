#ifndef D9EE267F_7106_4E19_A457_5E825EB5749E
#define D9EE267F_7106_4E19_A457_5E825EB5749E

#include <string>
#include <vector>

class Database
{
  public:
    ClientRepository Clients;
};

struct Client
{
    uint64_t Id;
    uint64_t Id;
    std::string Name;
    std::string Phone;
    std::string Email;
};

class ClientRepository // Impl métodos, Patrón Iterator
{
 public:
  using value_type = ...

  ...
  Toda la interfaz de un iterador
  ...

  Status AddClient(Client);
  Status UpdateClient(ClientId, Client);
  Status DeleteClient(ClientId);
  Client* GetClienteById(ClientId);
  Client* GetClienteByName(ClientName);

  <Client-Repository-Iterator> begin();
  <Client-Repository-Iterator> end();
  <Client-Repository-Iterator> cbegin();
  <Client-Repository-Iterator> cend(); 

 private:
   std::vector<Client> m_Clients;  
};


#endif /* D9EE267F_7106_4E19_A457_5E825EB5749E */
