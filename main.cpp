/*
 * 装饰者模式
 *
 * date:2023-9-7
*/

// milk: 2.0
// tea: 7.0

#include "tea.h"
#include "milk.h"

int main()
{

    cout << "要一杯茶，加一份牛奶" << endl;
    Beverage* beverage1 = new Tea();

    Beverage* beverage2 = new Milk(beverage1);

    cout << "订阅信息：" << beverage2->getDescription() <<
            " ，花费金额：" << beverage2->cost() << endl << endl;


    cout << "要一杯茶，加两份牛奶" << endl;
    Beverage* beverage3 = new Tea();
    Beverage* beverage4 = new Milk(beverage3);
    Beverage* beverage5 = new Milk(beverage4);

    cout << "订阅信息：" << beverage5->getDescription() <<
            " ，花费金额：" << beverage5->cost() << endl;


}

