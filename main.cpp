/*
 * 工厂方法模式
 *
 * date:2023-9-8
*/

#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

int main()
{
    cout << "订购一个纽约风味的奶酪披萨" << endl;
    PizzaStore *pizzaStore = new NYPizzaStore();
    Pizza *pizza = pizzaStore->orderPizza("cheese");
    pizza->display();

    cout << "\n芝加哥风味的披萨店加盟，可以订购芝加哥风味的披萨了\n" << endl;

    cout << "订购一个芝加哥风味的蔬菜披萨" << endl;
    pizzaStore = new ChicagoPizzaStore();
    pizza = pizzaStore->orderPizza("veggie");
    pizza->display();
}
