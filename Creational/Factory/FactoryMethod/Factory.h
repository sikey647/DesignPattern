#ifndef FACTORY_H
#define FACTORY_H

#include <memory>
#include <string>

#include "Product.h"

class Factory {
public:
    virtual std::shared_ptr<Product> createProduct() = 0;
};

#endif