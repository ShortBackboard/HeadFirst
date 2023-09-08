#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include "pizza.h"

class PizzaStore {
public:
    virtual Pizza* orderPizza(string type) = 0;
    virtual Pizza* createPizza(string type) =  0;
};

#endif // PIZZASTORE_H
