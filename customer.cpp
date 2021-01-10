#include "customer.h"

Customer::Customer(){}

Customer::Customer(int id, QString name, QString tel, QString email)
{
    this->id = id;
    this->name = name;
    this->tel = tel;
    this->email = email;
}
