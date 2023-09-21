#ifndef PLACE_H
#define PLACE_H
#include <iostream>
#include <string>

using namespace std;

class Place {
public:
    string getName()
    {
        return m_name;
    }

    virtual void accept() = 0;

protected:
    string m_name;
};


class School : public Place {
public:
    School(string name)
    {
        m_name = name;
    }

    virtual void accept() override
    {
        cout << m_name << "学校被访问" << endl;
    }
};

class Enterprice : public Place {
public:
    Enterprice(string name)
    {
        m_name = name;
    }

    virtual void accept() override
    {
        cout << m_name << "公司被访问" << endl;
    }
};


#endif // PLACE_H
