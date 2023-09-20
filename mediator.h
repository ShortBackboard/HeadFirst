#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "person.h"

class Mediator {
public:
    Mediator(Person* staff, Person* leader, Person* manager, Person* boss)
    {
        m_staff = staff;
        m_leader = leader;
        m_manager = manager;
        m_boss = boss;
    }

    void sentMessageToStaff(string message)
    {
        m_staff->setMessage(message);
        cout << m_staff->getName() << "收到信息："  << m_staff->getMessage() << endl;
    }

    void sentMessageToLeader(string message)
    {
        m_leader->setMessage(message);
        cout << m_leader->getName() << "收到信息："  << m_leader->getMessage() << endl;
    }

    void sentMessageToManager(string message)
    {
        m_manager->setMessage(message);
        cout << m_manager->getName() << "收到信息："  << m_manager->getMessage() << endl;
    }

    void sentMessageToBoss(string message)
    {
        m_boss->setMessage(message);
        cout << m_boss->getName() << "收到信息："  << m_boss->getMessage() << endl;
    }



private:
    Person* m_staff;
    Person* m_leader;
    Person* m_manager;
    Person* m_boss;
};

#endif // MEDIATOR_H
