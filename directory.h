#ifndef DIRECTORY_H
#define DIRECTORY_H
#include "component.h"

class Directory : public Component {
public:
    Directory(string name);
    virtual void add(Component* c) override;
    virtual void print() override;
    virtual string getName() override;

private:
    vector<Component* > m_components;
};

Directory::Directory(string name)
{
    m_name = name;
    isDirectory = true;
}

void Directory::add(Component* c)
{
    m_components.push_back(c);
}

string Directory::getName()
{
    return m_name;
}


void Directory::print()
{
    for(int i = 0; i < m_components.size(); i++)
    {
        if(m_components[i]->isDirectory)
        {
            cout << "文件夹:" << m_components[i]->getName() << " ";
        }
        else
        {
            m_components[i]->print();
        }
    }

    cout << endl;
}



#endif // DIRECTORY_H
