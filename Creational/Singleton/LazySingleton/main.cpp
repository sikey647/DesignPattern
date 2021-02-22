#include <iostream>

#include "LazySingleton.h"
#include "ThreadSafeLazySingleton.h"

int main() {
    LazySingleton * ls1 = LazySingleton::getInstance();
    LazySingleton * ls2 = LazySingleton::getInstance();

    if (ls1 == ls2) {
        std::cout << "LazySingleton is Singleton" << std::endl;
    } else {
        std::cout << "LazySingleton is not Singleton" << std::endl;
    }

    ThreadSafeLazySingleton *ls3 = ThreadSafeLazySingleton::getInstance();
    ThreadSafeLazySingleton *ls4 = ThreadSafeLazySingleton::getInstance();

    if (ls3 == ls4) {
        std::cout << "ThreadSafeLazySingleton is Singleton" << std::endl;
    } else {
        std::cout << "ThreadSafeLazySingleton is not Singleton" << std::endl;
    }

    return 0;
}