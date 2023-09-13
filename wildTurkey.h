#ifndef WILDTURKEY_H
#define WILDTURKEY_H
#include "turkey.h"

class WildTurkey : public Turkey {
public:
    virtual void flySlowly() override;
};

void WildTurkey::flySlowly()
{
    cout << "fly slowly" << endl;
}

#endif // WILDTURKEY_H
