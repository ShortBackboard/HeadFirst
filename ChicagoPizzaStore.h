#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H
#include "pizzaStore.h"
#include "ChicagoStyleVeggiePizza.h"

class ChicagoPizzaStore : public PizzaStore {
public:
    virtual Pizza* orderPizza(string type) override;
    virtual Pizza* createPizza(string type) override;
};

Pizza* ChicagoPizzaStore::createPizza(string type)
{
    Pizza* pizza;

    if(type == "veggie")
    {
        pizza = new ChicagoStyleVeggiePizza();
    }

    return pizza;
}

Pizza* ChicagoPizzaStore::orderPizza(string type)
{
    Pizza* pizza;
    pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
#endif // CHICAGOPIZZASTORE_H
