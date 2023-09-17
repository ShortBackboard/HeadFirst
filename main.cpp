/*
 * 代理模式
 *
 * date:2023-9-17
*/

#include "proxy.h"

int main()
{
    Shop* buyer = new Buyer();
    Shop* proxy = new Proxy(buyer);

    proxy->buy();
}

