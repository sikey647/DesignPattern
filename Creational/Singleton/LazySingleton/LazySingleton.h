#ifndef LAZYSINGLETON_H
#define LAZYSINGLETON_H

class LazySingleton {
public:
    LazySingleton(const LazySingleton&) = delete;
    LazySingleton& operator=(const LazySingleton&) = delete;

    static LazySingleton* getInstance();

private:
    LazySingleton();

    static LazySingleton *instance;
};

#endif