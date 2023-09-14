#ifndef COFFEE_H
#define COFFEE_H
#include "caffeineBeverage.h"

class Coffee : public CaffeineBeverage {
public:
    virtual void brew() override {
        cout << "用沸水泡咖啡" << endl;
    }

    virtual void addCondiments() override {
        cout << "添加牛奶" << endl;
    }
};

#endif // COFFEE_H
