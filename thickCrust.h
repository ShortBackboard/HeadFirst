#ifndef THICKCRUST_H
#define THICKCRUST_H
#include "crust.h"

class ThickCrust : public Crust {
public:
    virtual void display() override;
};

void ThickCrust::display()
{
    cout <<"硬面包片";
}


#endif // THICKCRUST_H
