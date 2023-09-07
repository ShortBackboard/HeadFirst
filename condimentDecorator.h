#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include "beverage.h"

class CondimentDecorator : public Beverage {
public:
    virtual string getDescription() = 0;
};

#endif // CONDIMENTDECORATOR_H
