#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "duck.h"

class Expression {
public:
    virtual void interpret() = 0;

protected:
    Duck* m_duck = new Duck();
};

class Quack : public Expression{
public:
    virtual void interpret()
    {
        m_duck->quack();
    }

};

class Left : public Expression{
public:
    virtual void interpret()
    {
        m_duck->left();
    }

};


#endif // EXPRESSION_H
