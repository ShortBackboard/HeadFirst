#ifndef TEA_H
#define TEA_H
#include "beverage.h"

class Tea : public Beverage {
public:
    Tea();
    virtual string getDescription() override;
    virtual double cost() override;

};

Tea::Tea()
{
    m_description = "茶";
}

string Tea::getDescription()
{
    return m_description;
}

double Tea::cost()
{
    return 7.0;
}
#endif // TEA_H
