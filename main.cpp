/*
 * 中介者模式
 *
 * date:2023-9-20
*/

#include "mediator.h"

int main()
{
    Person* p1 = new Staff("员工A");
    Person* p2 = new Leader("组长B");
    Person* p3 = new Manager("经理C");
    Person* p4 = new Boss("老板D");

    Mediator* mediator = new Mediator(p1, p2, p3, p4);

    cout << "员工A向组长B请假" << endl;

    mediator->sentMessageToLeader(p1->getName() + ":我明天想请假");

    puts("");

    cout << "经理C向老板D申请项目A" << endl;

    mediator->sentMessageToBoss(p3->getName() + ":申请项目A\n");


}
