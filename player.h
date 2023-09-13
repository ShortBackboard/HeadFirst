#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

class Player {
public:
    void on()
    {
        cout << "开始播放" << endl;
    }

    void off()
    {
        cout << "停止播放" << endl;
    }
};
#endif // PLAYER_H
