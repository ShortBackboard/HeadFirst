#ifndef PROJECTOR_H
#define PROJECTOR_H
#include <iostream>
using namespace std;

class Projector {
public:
    void on()
    {
        cout << "打开投影仪" << endl;
    }

    void off()
    {
        cout << "关闭投影仪" << endl;
    }

    void toDVD()
    {
        cout << "切换到DVD模式" << endl;
    }
};
#endif // PROJECTOR_H
