#ifndef COMPONENT_H
#define COMPONENT_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Component {
public:
    virtual void add(Component* c) = 0;
    virtual void print() = 0;
    virtual string getName() = 0;
    bool isDirectory;
protected:
    string m_name;
};

#endif // COMPONENT_H
