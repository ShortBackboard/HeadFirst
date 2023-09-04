#ifndef DISPLAYBEHAVIOR_H
#define DISPLAYBEHAVIOR_H
#include <iostream>
using namespace std;// 实际开发中不建议

class DisplayBehavior {
public:
    virtual void display() = 0; // 纯虚函数，提供接口
};


#endif // DISPLAYBEHAVIOR_H
