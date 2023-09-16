#ifndef FILE_H
#define FILE_H
#include "component.h"

class File : public Component {
public:
    File(string name);
    virtual void add(Component* c) override
    {

    }

    virtual string getName() override
    {
        return m_name;
    }

    virtual void print() override;

};

File::File(string name)
{
    m_name = name;
    isDirectory = false;
}

void File::print()
{
    cout << "文件: " << m_name << " ";
}

#endif // FILE_H
