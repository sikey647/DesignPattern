#include <iostream>

#include "LazySingleton.h"

LazySingleton *LazySingleton::instance = nullptr;

LazySingleton::LazySingleton() {
    std::cout << "LazySingleton create" << std::endl;
}

LazySingleton* LazySingleton::getInstance() {
    if (instance == nullptr) {
        instance = new LazySingleton();
    }
    return instance;
}