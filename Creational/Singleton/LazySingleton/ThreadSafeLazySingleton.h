#ifndef THREADSAFELAZYSINGLETON_H
#define THREADSAFELAZYSINGLETON_H

#include <mutex>

class ThreadSafeLazySingleton {
public:
    ThreadSafeLazySingleton(const ThreadSafeLazySingleton&) = delete;
    ThreadSafeLazySingleton& operator=(const ThreadSafeLazySingleton&) = delete;

    static ThreadSafeLazySingleton* getInstance();

private:
    ThreadSafeLazySingleton();

    static ThreadSafeLazySingleton *instance;
    static std::mutex mtx;
};

#endif