#ifndef HUNGRYSINGLETON_H
#define HUNGRYSINGLETON_H

/*
 * 饿汉式
 *
 * 饿汉式单例模式就是在类加载的时候就立即初始化并且创建单例对象。不管你有没有用到，都先建好了再说。它绝对线程安全，在线程还没出现以前就实例化了，不可能存在访问安全问题。
 * 优点：线程安全，没有加任何锁、执行效率比较高。
 * 缺点：类加载的时候就初始化，不管后期用不用都占着空间，浪费了内存。
 *
 * 饿汉式单例适合用在单例类比较少的情况下，在实际项目中，有可能会存在很多的单例类，如果我们都使用饿汉式单例的话，对内存的浪费会很大，所以，我们要学习更优的写法。
*/

#include <iostream>
using namespace std;

class HungrySingleton {
    // 先属性，后方法
    // 先上后下
private:
    static HungrySingleton* m_hungrySingleton = new HungrySingleton();

    HungrySingleton();

public:
    static HungrySingleton* getInstance();
};

HungrySingleton* HungrySingleton::getInstance()
{
    return m_hungrySingleton;
}


#endif // HUNGRYSINGLETON_H
