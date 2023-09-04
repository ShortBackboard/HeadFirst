#ifndef REDBEHAVIOR_H
#define REDBEHAVIOR_H
#include "displayBehavior.h"

class RedBehavior : public DisplayBehavior {
    virtual void display() override final;
};

void RedBehavior::display()
{
    cout << "外观是红色" << endl;
}

#endif // REDBEHAVIOR_H
