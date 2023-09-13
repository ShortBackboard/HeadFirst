#ifndef TURKEYADAPTOR_H
#define TURKEYADAPTOR_H
#include "duck.h"
#include "turkey.h"

class TurkeyAdaptor : public Duck{
public:
    TurkeyAdaptor(Turkey* turkey);
    virtual void fly() override;
private:
    Turkey* m_turkey;

};

TurkeyAdaptor::TurkeyAdaptor(Turkey *turkey)
{
    m_turkey = turkey;
}

void TurkeyAdaptor::fly()
{
    m_turkey->flySlowly();
}



#endif // TURKEYADAPTOR_H
