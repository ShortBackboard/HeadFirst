#ifndef BAG_H
#define BAG_H
#include "color.h"

class Bag {
public:
    virtual void display() = 0;

protected:
    Color* m_color;
    string m_type;
};

class Wallet : public Bag {
public:
    Wallet(Color* color)
    {
        m_color = color;
        m_type  = "钱包";
    }


    virtual void display() override
    {
        cout << m_color->getColor() << "的" << m_type << endl;
    }
};

class HandBag : public Bag {
public:
    HandBag(Color* color)
    {
        m_color = color;
        m_type  = "跨包";
    }


    virtual void display() override
    {
        cout << m_color->getColor() << "的" << m_type << endl;
    }
};

#endif // BAG_H
