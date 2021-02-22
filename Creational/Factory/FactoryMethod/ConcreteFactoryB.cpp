#include "ConcreteFactoryB.h"
#include "ConcreteProductB.h"

std::shared_ptr<Product> ConcreteFactoryB::createProduct() {
    return std::make_shared<ConcreteProductB>();
}