/*
 * 适配器模式
 *
 * date:2023-9-13
*/

#include "turkeyAdaptor.h"
#include "wildTurkey.h"

void testDuck(Duck* duck)
{
    duck->fly();
}

int main()
{
    cout << "客户端需要一个鸭类，使用适配器将火鸡类转换成鸭类" << endl;

    Turkey* wildTurkey = new WildTurkey();

    Duck* turkeyAdaptor = new TurkeyAdaptor(wildTurkey);

    testDuck(turkeyAdaptor);
}
