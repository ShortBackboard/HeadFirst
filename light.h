#ifndef LIGHT_H
#define LIGHT_H
#include <iostream>
using namespace std;

class Light {
public:
    void on();
    void off();
};

void Light::on()
{
    cout << "灯打开了！" << endl;
}

void Light::off()
{
    cout << "灯关闭了！" << endl;
}

#endif // LIGHT_H
