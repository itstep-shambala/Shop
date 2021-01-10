#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QString>

class Customer
{
public:
    int id;
    QString name;
    QString tel;
    QString email;

    Customer();
    Customer(int id, QString name, QString tel, QString email);
};

#endif // CUSTOMER_H
