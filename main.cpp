/*
 * 策略模式
 *
 * date:2023-9-4
*/

#include "redDuck.h"

int main()
{
    cout << "红色鸭子" << endl;
    RedDuck rd;
    rd.quack();
    rd.swim();
    rd.dis->display();

    cout << "\n红色鸭子改变成白色鸭子\n" << endl;
    rd.setWhiteBehavior();
    rd.dis->display();

}

