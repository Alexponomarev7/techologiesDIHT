#ifndef SINGLETON_H
#define SINGLETON_H

// Не такой уж и плохой singleton...

template<typename T>
class Singleton {
public:
    static T& instance();
    Singleton() = delete;
};

template <typename T>
T& Singleton<T>::instance() {
    static T _data = T();
    return _data;
}

#endif // SINGLETON_H
