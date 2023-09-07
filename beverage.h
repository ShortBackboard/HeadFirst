#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <iostream>
#include <string>
using namespace std;

class Beverage {
public:
    virtual string getDescription() = 0;
    virtual double cost() = 0;

protected: // 只传给子类
    string m_description;
};


#endif // BEVERAGE_H
