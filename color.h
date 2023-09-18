#ifndef COLOR_H
#define COLOR_H
#include <iostream>
#include <string>
using namespace std;

class Color {
public:
    virtual string getColor() = 0;

protected:
    string m_color;
};

class Yellow : public Color {
public:
    Yellow()
    {
        m_color = "黄色";
    }

    virtual string getColor() override
    {
        return m_color;
    }
};

class Red : public Color {
public:
    Red()
    {
        m_color = "红色";
    }

    virtual string getColor() override
    {
        return m_color;
    }
};

#endif // COLOR_H
