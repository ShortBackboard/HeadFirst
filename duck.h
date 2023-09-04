#ifndef DUCK_H
#define DUCK_H
#include "displayBehavior.h"
#include "redBehavior.h"
#include "whiteDisplay.h"

class Duck {
public:
    // 共同的行为
    void quack();
    void swim();

public:
    // 动态改变行为
    void setRedBehavior();
    void setWhiteBehavior();


public:
    DisplayBehavior *dis; // 面向接口编程
};

void Duck::quack()
{
    cout << "鸭子叫" << endl;
}

void Duck::swim()
{
    cout << "鸭子游泳" << endl;
}

void Duck::setRedBehavior()
{
    dis = new RedBehavior();
}

void Duck::setWhiteBehavior()
{
    dis = new WhiteDisplay();
}


#endif // DUCK_H
