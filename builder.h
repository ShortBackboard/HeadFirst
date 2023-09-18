#ifndef BUILDER_H
#define BUILDER_H
#include "car.h"

class Builder {
public:
    virtual void setSequence() = 0;

protected:
    Car* m_car;
};

class ACarBuilder : public Builder {
public:
    ACarBuilder()
    {
        m_car = new ACar();
    }

    virtual void setSequence() override
    {
        m_car->start();
        m_car->engineBoom();
        m_car->alarm();
        m_car->stop();
    }
};

class BCarBuilder : public Builder {
public:
    BCarBuilder()
    {
        m_car = new BCar();
    }

    virtual void setSequence() override
    {
        m_car->start();
        m_car->alarm();
        m_car->engineBoom();
        m_car->stop();
    }
};

#endif // BUILDER_H
