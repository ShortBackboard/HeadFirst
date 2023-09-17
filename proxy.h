#ifndef PROXY_H
#define PROXY_H
#include "buyer.h"

class Proxy : public Shop {
public:
    Proxy(Shop* buyer)
    {
        m_buyer = buyer;
    }

    void distinguish()
    {
        cout << "辨别手机为真" << endl;
    }

    virtual void buy() override
    {
        distinguish();
        cout << "代理人帮用户找到手机" << endl;
        m_buyer->buy();
    }

private:
    Shop* m_buyer;
};
#endif // PROXY_H
