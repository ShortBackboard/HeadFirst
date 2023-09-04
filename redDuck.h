#ifndef REDDUCK_H
#define REDDUCK_H
#include "duck.h"

class RedDuck : public Duck {
public:
    RedDuck();
};

RedDuck::RedDuck()
{
    dis = new RedBehavior();
}

#endif // REDDUCK_H
