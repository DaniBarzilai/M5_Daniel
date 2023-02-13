#include <iostream>
using namespace std;

class Cliente {
private:
  int IMEI;
  std::string login;

public:
  Cliente();
  Cliente(int IMEI, std::string login);
  string getLogin() const;
  int getIMEI() const;
};