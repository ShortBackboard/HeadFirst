#ifndef WHITEDISPLAY_H
#define WHITEDISPLAY_H
#include "displayBehavior.h"

class WhiteDisplay : public DisplayBehavior {
    virtual void display() override final;
};

void WhiteDisplay::display()
{
    cout << "外观是白色" << endl;
}

#endif // WHITEDISPLAY_H
