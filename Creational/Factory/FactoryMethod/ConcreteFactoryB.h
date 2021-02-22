#ifndef CONCRETEFACTORYB_H
#define CONCRETEFACTORYB_H

#include <memory>
#include <string>

#include "Factory.h"
#include "Product.h"

class ConcreteFactoryB : public Factory {
public:
    std::shared_ptr<Product> createProduct() override;
};

#endif