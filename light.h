#ifndef LIGHT_H
#define LIGHT_H
#include <iostream>
using namespace std;

class Light {
public:
    void up()
    {
        cout << "灯光调亮" << endl;
    }

    void down()
    {
        cout << "灯光调暗" << endl;
    }
};

#endif // LIGHT_H
