#include <iostream>

#include "ThreadSafeLazySingleton.h"

ThreadSafeLazySingleton *ThreadSafeLazySingleton::instance = nullptr;
std::mutex ThreadSafeLazySingleton::mtx;

ThreadSafeLazySingleton::ThreadSafeLazySingleton() {
    std::cout << "ThreadSafeLazySingleton create" << std::endl;
}

ThreadSafeLazySingleton* ThreadSafeLazySingleton::getInstance() {
    mtx.lock();
    if (instance == nullptr) {
        instance = new ThreadSafeLazySingleton();
    }
    mtx.unlock();
    return instance;
}