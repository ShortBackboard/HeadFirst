#ifndef CHINAPIZZASTORE_H
#define CHINAPIZZASTORE_H
#include "pizzaStore.h"

class ChinaPizzaStore : public PizzaStore {
public:
    virtual Pizza* orderPizza(string type) override;
private:
    virtual Pizza* createPizza(string type) override;
};

Pizza* ChinaPizzaStore::createPizza(string type)
{
    Pizza* pizza;

    if(type == "halfSugarAndThickCrust")
    {
        pizza->prepareSugar("halfSugar");
        pizza->prepareCrust("thickCrust");
    }

    //else if

    return pizza;
}

Pizza* ChinaPizzaStore::orderPizza(string type)
{
    return createPizza(type);
}

#endif // CHINAPIZZASTORE_H
