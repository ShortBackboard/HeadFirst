#ifndef CAFFEINEBEVERAGE_H
#define CAFFEINEBEVERAGE_H
#include <iostream>
using namespace std;

class CaffeineBeverage {
public:
    void boilWater()
    {
        cout << "把水煮沸" << endl;
    }

    virtual void brew() = 0;

    void pourIntoCup()
    {
        cout << "把饮料倒进杯子" << endl;
    }

    virtual void addCondiments() = 0;

    // hook钩子方法
    bool customerWantsPack = true;

    void pack()
    {
        cout << "打包饮料" << endl;
    }

    virtual void prepareRecipe() final{
        boilWater();
        brew();
        pourIntoCup();
        addCondiments();

        // 默认打包
        if(customerWantsPack) pack();
    }

};

#endif // CAFFEINEBEVERAGE_H
