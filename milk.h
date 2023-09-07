#ifndef MILK_H
#define MILK_H
#include "condimentDecorator.h"


class Milk : public CondimentDecorator {
public:
    Milk(Beverage* beverage);
    virtual string getDescription() override;
    virtual double cost() override;

private:
    Beverage* m_beverage;

};

Milk::Milk(Beverage *beverage)
{
    m_beverage = beverage;
}

string Milk::getDescription()
{
    return m_beverage->getDescription() + " + 牛奶";
}

double Milk::cost()
{
    return m_beverage->cost() + 2.0;
}

#endif // MILK_H
