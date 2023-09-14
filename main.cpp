/*
 * 模板方法模式
 *
 * date:2023-9-14
*/

#include "tea.h"
#include "coffee.h"

int main()
{
    cout  << "泡茶，默认钩子方法，打包" << endl;

    CaffeineBeverage* caffeineBeverage = new Tea();
    caffeineBeverage->prepareRecipe();

    cout << "\n泡咖啡，修改钩子方法，不打包" << endl;
    caffeineBeverage = new Coffee();
    caffeineBeverage->customerWantsPack = false;
    caffeineBeverage->prepareRecipe();
}
