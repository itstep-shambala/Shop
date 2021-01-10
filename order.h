#ifndef ORDER_H
#define ORDER_H

#include <QString>
#include <QDate>
#include "customer.h"
#include "product.h"

class Order
{
public:
    int id;
    QDate date;    
    int idCustomer;
    int idProduct;
    int count;
    int totalSum;

    Order();    
};

#endif // ORDER_H
