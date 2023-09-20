#ifndef BALL_H
#define BALL_H
#include <iostream>
using namespace std;

class Ball {
public:
    Ball(int size)
    {
        m_size = size;
    }

    int getSize()
    {
        return m_size;
    }

private:
    int m_size;
};

#endif // BALL_H
