#ifndef PRODUCTFACTORY_H
#define PRODUCTFACTORY_H

#include <memory>
#include <string>
#include <map>

#include "Product.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

class ProductFactory {
public:
    int Init();
    std::shared_ptr<Product> createProduct(std::string type);
    
private:
    std::map<std::string, std::shared_ptr<Product>> m_productMap;
};

#endif