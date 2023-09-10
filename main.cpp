/*
 * 抽象工厂模式
 *
 * date:2023-9-10
*/

#include "chinaPizzaStore.h"

int main()
{
    cout << "要一份半糖，硬面包片的中式披萨\n" << endl;

    PizzaStore *pizzaStore = new ChinaPizzaStore();
    Pizza* pizza = pizzaStore->orderPizza("halfSugarAndThickCrust");
    pizza->display();

}
