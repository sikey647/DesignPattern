#ifndef FACTORYMANAGER_H
#define FACTORYMANAGER_H

#include <memory>
#include <string>
#include <map>

#include "Factory.h"
#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"

class FactoryManager {
public:
    int Init();
    std::shared_ptr<Factory> getFactory(std::string type);
    
private:
    std::map<std::string, std::shared_ptr<Factory>> m_factoryMap;
};

#endif