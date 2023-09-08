#ifndef NYSTYLECHEESEPIZZA_H
#define NYSTYLECHEESEPIZZA_H
#include "pizza.h"

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza();
};

NYStyleCheesePizza::NYStyleCheesePizza()
{
    m_type = "纽约奶酪披萨";
}

#endif // NYSTYLECHEESEPIZZA_H
