#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    virtual void setMessage(string message) = 0;

    string getMessage()
    {
        return m_message;
    }

    string getName()
    {
        return m_name;
    }

protected:
    string m_message;
    string m_name;
};

class Staff : public Person {
public:
    Staff(string name)
    {
        m_name = name;
    }

    virtual void setMessage(string message) override
    {
        m_message = message;
    }
};

class Leader : public Person {
public:
    Leader(string name)
    {
        m_name = name;
    }

    virtual void setMessage(string message) override
    {
        m_message = message;
    }
};

class Manager : public Person {
public:
    Manager(string name)
    {
        m_name = name;
    }

    virtual void setMessage(string message) override
    {
        m_message = message;
    }
};

class Boss : public Person {
public:
    Boss(string name)
    {
        m_name = name;
    }

    virtual void setMessage(string message) override
    {
        m_message = message;
    }
};

#endif // PERSON_H
