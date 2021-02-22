#include <iostream>

#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"
#include "FactoryManager.h"

int main() {
    // auto factoryA = std::make_shared<ConcreteFactoryA>();
    // auto productA = factoryA->createProduct();
    // if (productA != nullptr) {
    //     productA->doWork();
    // }
    

    // auto factoryB = std::make_shared<ConcreteFactoryB>();
    // auto productB = factoryA->createProduct();
    // if (productB != nullptr) {
    //     productB->doWork();
    // }

    FactoryManager factoryManager;
    factoryManager.Init();

    auto factoryAA = factoryManager.getFactory("A");
    if (factoryAA == nullptr) {
        std::cout << "factoryAA = nullptr" << std::endl;
    } else {
        auto productAA = factoryAA->createProduct();
        if (productAA != nullptr) {
            productAA->doWork();
        }
    }

    auto factoryBB = factoryManager.getFactory("B");
    if (factoryBB == nullptr) {
        std::cout << "factoryBB = nullptr" << std::endl;
    } else {
        auto productBB = factoryBB->createProduct();
        if (productBB != nullptr) {
            productBB->doWork();
        }
    }
    
    return 0;
}