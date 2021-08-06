#ifndef HUNGRYSINGLETON_H
#define HUNGRYSINGLETON_H

class HungrySingleton {
public:
    HungrySingleton(const HungrySingleton&) = delete;
    HungrySingleton& operator=(const HungrySingleton&) = delete;
    
    static HungrySingleton* getInstance();
    void destroy();

private:
    HungrySingleton();
    ~HungrySingleton();

    static HungrySingleton *instance;
};

#endif
