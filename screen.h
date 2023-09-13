#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
using namespace std;

class Screen {
public:
    void open()
    {
        cout << "打开屏幕" << endl;
    }

    void close()
    {
        cout << "关闭屏幕" << endl;
    }
};

#endif // SCREEN_H
