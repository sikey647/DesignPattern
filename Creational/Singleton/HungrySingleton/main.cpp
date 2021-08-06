#include <iostream>

#include "HungrySingleton.h"

int main() {
    HungrySingleton *hs1 = HungrySingleton::getInstance();
    HungrySingleton *hs2 = HungrySingleton::getInstance();
    
    if (hs1 == hs2) {
        std::cout << "HungrySingleton is Singleton" << std::endl;
    } else {
        std::cout << "HungrySingleton is not Singleton" << std::endl;
    }

    hs1->destroy();
    hs2->destroy();

    return 0;
}
