#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H
#include "pizzaStore.h"
#include "NYStyleCheesePizza.h"

class NYPizzaStore : public PizzaStore {
public:
    virtual Pizza* orderPizza(string type) override;
    virtual Pizza* createPizza(string type) override;
};

Pizza* NYPizzaStore::createPizza(string type)
{
    Pizza* pizza;

    if(type == "cheese")
    {
        pizza = new NYStyleCheesePizza();
    }

    return pizza;
}

Pizza* NYPizzaStore::orderPizza(string type)
{
    Pizza* pizza;
    pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}

#endif // NYPIZZASTORE_H
