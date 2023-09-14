#ifndef TEA_H
#define TEA_H
#include "caffeineBeverage.h"

class Tea : public CaffeineBeverage {
public:
    virtual void brew() override {
        cout << "用沸水泡茶" << endl;
    }

    virtual void addCondiments() override {
        cout << "添加柠檬" << endl;
    }
};

#endif // TEA_H
