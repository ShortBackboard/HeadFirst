#ifndef BUYER_H
#define BUYER_H
#include "shop.h"

class Buyer : public Shop {
public:
    virtual void buy() override
    {
        cout << "用户购买手机" << endl;
    }
};

#endif // BUYER_H
