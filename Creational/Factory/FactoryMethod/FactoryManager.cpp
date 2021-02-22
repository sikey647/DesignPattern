#include "FactoryManager.h"

int FactoryManager::Init() {
    m_factoryMap["A"] = std::make_shared<ConcreteFactoryA>();
    m_factoryMap["B"] = std::make_shared<ConcreteFactoryB>();
    
    return 0;
}

std::shared_ptr<Factory> FactoryManager::getFactory(std::string type) {
    auto itr = m_factoryMap.find(type);
    if (itr != m_factoryMap.end()) {
        return itr->second;
    }

    return nullptr;
}