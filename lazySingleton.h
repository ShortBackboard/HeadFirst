#ifndef LAZYSINGLETON_H
#define LAZYSINGLETON_H

/*
 *  懒汉式
 *
 * 懒汉式，顾名思义就是实例在需要用到的时候才去创建，“比较懒”，用的时候才去检查有没有实例，如果有则直接返回，没有则新建。
 *
 * 如此写法不是线程安全的，如果多个线程同时走到"null == m_lazySinglenton"且还没有实例化对象，就都判断为true，就会导致各个线程各自创建了一个实例，就不是单例了。
 *
 * 改善：加锁
*/


#include <iostream>
using namespace std;

class LazySingleton {
public:
    static LazySingleton* getInstance();

private:
    LazySingleton();
    static LazySingleton* m_lazySinglenton;
};

LazySingleton* LazySingleton::getInstance()
{
    if(null == m_lazySinglenton)
    {
        m_lazySinglenton = new LazySingleton();
    }

    return m_lazySinglenton;
}

#endif // LAZYSINGLETON_H
