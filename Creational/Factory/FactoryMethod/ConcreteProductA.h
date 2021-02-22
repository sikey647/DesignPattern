#ifndef CONCRETEPRODUCTA_H
#define CONCRETEPRODUCTA_H

#include "Product.h"

class ConcreteProductA : public Product {
public:
    int doWork() override;
};

#endif