#include "HungrySingleton.h"

#include <iostream>

HungrySingleton * HungrySingleton::instance = new HungrySingleton();

HungrySingleton::HungrySingleton() {
    std::cout << "HungrySingleton create" << std::endl;
}

HungrySingleton* HungrySingleton::getInstance() {
    return instance;
}