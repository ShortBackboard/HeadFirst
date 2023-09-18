/*
 * 建造者模式
 *
 * date:2023-9-18
*/

#include "builder.h"

int main()
{
    Builder* builder = new ACarBuilder();
    builder->setSequence();

    cout << endl;

    builder = new BCarBuilder();
    builder->setSequence();
}
