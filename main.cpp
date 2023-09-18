/*
 * 桥接模式
 *
 * date:2023-9-18
*/

#include "bag.h"

int main()
{
    Color* color = new Red();
    Bag* wallet = new Wallet(color);
    wallet->display();

    color = new Yellow();
    Bag* handBag = new HandBag(color);
    handBag->display();
}
