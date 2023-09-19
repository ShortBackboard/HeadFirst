#ifndef GRADEHANDLER_H
#define GRADEHANDLER_H
#include <iostream>
using namespace std;

class GradeHandler {
public:
    virtual void handle(int grade) = 0;

protected:
    GradeHandler* m_successor;
};

class EHandler : public GradeHandler {
public:
    EHandler()
    {
        m_successor = NULL;
    }

    virtual void handle(int grade) override
    {
        cout << "E等级处理" << endl;
    }

};

class DHandler : public GradeHandler {
public:
    DHandler()
    {
        m_successor = new EHandler();
    }

    virtual void handle(int grade) override
    {
        if(grade <= 70 && grade > 60)
        {
            cout << "D等级处理" << endl;
        }
        else
        {
            m_successor->handle(grade);
        }
    }

};

class CHandler : public GradeHandler {
public:
    CHandler()
    {
        m_successor = new DHandler();
    }

    virtual void handle(int grade) override
    {
        if(grade <= 80 && grade > 70)
        {
            cout << "C等级处理" << endl;
        }
        else
        {
            m_successor->handle(grade);
        }
    }

};

class BHandler : public GradeHandler {
public:
    BHandler()
    {
        m_successor = new CHandler();
    }

    virtual void handle(int grade) override
    {
        if(grade <= 90 && grade > 80)
        {
            cout << "B等级处理" << endl;
        }
        else
        {
            m_successor->handle(grade);
        }
    }

};


class AHandler : public GradeHandler {
public:
    AHandler()
    {
        m_successor = new BHandler();
    }

    virtual void handle(int grade) override
    {
        if(grade <= 100 && grade > 90)
        {
            cout << "A等级处理" << endl;
        }
        else
        {
            m_successor->handle(grade);
        }
    }

};

#endif // GRADEHANDLER_H
