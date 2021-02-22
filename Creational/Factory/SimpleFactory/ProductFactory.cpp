#include "ProductFactory.h"

int ProductFactory::Init() {
    m_productMap["A"] = std::make_shared<ConcreteProductA>();
    m_productMap["B"] = std::make_shared<ConcreteProductB>();

    return 0;
}

std::shared_ptr<Product> ProductFactory::createProduct(std::string productType) {
    auto itr = m_productMap.find(productType);
    if (itr != m_productMap.end()) {
        return itr->second; 
    }

    return nullptr;
}