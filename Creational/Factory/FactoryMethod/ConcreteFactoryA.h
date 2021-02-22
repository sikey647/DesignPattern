#ifndef CONCRETEFACTORYA_H
#define CONCRETEFACTORYA_H

#include <memory>
#include <string>

#include "Factory.h"
#include "Product.h"

class ConcreteFactoryA : public Factory {
public:
    std::shared_ptr<Product> createProduct() override;
};

#endif