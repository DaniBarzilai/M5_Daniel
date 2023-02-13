#include "cliente.h"

Cliente::Cliente(){
  this->IMEI   = -1;
  this->login = "";
};  
Cliente::Cliente(int MEI, std::string login){
  this->IMEI    = IMEI;
  this->login  = login;
}
string Cliente::getLogin() const {
  return login;
}
int Cliente::getIMEI() const{
  return IMEI;
}