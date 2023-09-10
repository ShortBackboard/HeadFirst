#ifndef HALFSUGAR_H
#define HALFSUGAR_H
#include "sugar.h"

class HalfSugar : public Sugar {
public:
    virtual void display() override;
};

void HalfSugar::display()
{
    cout << "半糖 ";
}



#endif // HALFSUGAR_H
