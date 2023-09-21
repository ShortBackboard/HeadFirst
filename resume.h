#ifndef RESUME_H
#define RESUME_H
#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Resume {
public:
    void setName(string name)
    {
        m_name = name;
    }

    string getName()
    {
        return m_name;
    }

    void setSkill(string skill)
    {
        m_skill = skill;
    }

    string getSkill()
    {
        return m_skill;
    }

    void display()
    {
        cout << "简历人姓名：" << m_name
             << " ，技能：" << m_skill << endl;
    }

    virtual Resume* clone() = 0;


protected:
    string m_name;
    string m_skill;
};


class ResumeA :public Resume {
public:
    ResumeA(string name, string skill)
    {
        m_name = name;
        m_skill = skill;
    }

    virtual Resume* clone() override
    {
        return this;
    }

};

#endif // RESUME_H
