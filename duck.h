#ifndef DUCK_H
#define DUCK_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Duck {
public:
    void quack()
    {
        cout << "鸭子嘎嘎叫" << endl;
    }

    void right()
    {
        cout << "鸭子右转" << endl;
    }

    void left()
    {
        cout << "鸭子左转" << endl;
    }

    void fly()
    {
        cout << "鸭子飞" << endl;
    }
};

#endif // DUCK_H
