#include "ConcreteFactoryA.h"
#include "ConcreteProductA.h"

std::shared_ptr<Product> ConcreteFactoryA::createProduct() {
    return std::make_shared<ConcreteProductA>();
}