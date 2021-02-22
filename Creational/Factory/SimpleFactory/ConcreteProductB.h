#ifndef CONCRETEPRODUCTB_H
#define CONCRETEPRODUCTB_H

#include "Product.h"

class ConcreteProductB : public Product {
public:
    int doWork() override;
};

#endif