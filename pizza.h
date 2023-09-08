#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <string>
using namespace std;

class Pizza {
public:
    void prepare();
    void bake();
    void cut();
    void box();
    void display();

protected:
    string m_type;
};

void Pizza::prepare()
{
    cout << "准备，";
}

void Pizza::bake()
{
    cout << "烘烤，";
}

void Pizza::cut()
{
    cout << "切片，";
}

void Pizza::box()
{
    cout << "装箱，";
}

void Pizza::display()
{
    cout << m_type << "制作好了！" << endl;
}
#endif // PIZZA_H
