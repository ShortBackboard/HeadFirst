#ifndef BALLMANAGER_H
#define BALLMANAGER_H
#include "ball.h"
#include <random>

class BallManager {
public:
    void display()
    {
        cout << "球的大小：" << m_ball->getSize() << ",  " <<
        "球的颜色：RGB(" <<m_red << "," << m_green << "," << m_blue << ")" << endl;
    }

    void createBall(int num)
    {
        for(int i = 0; i < num; i++)
        {
            m_red = rand() % 255;
            m_green = rand() % 255;
            m_blue = rand() % 255;
            display();
        }
    }

private:
    Ball* m_ball = new Ball(5);
    int m_red;
    int m_green;
    int m_blue;
};

#endif // BALLMANAGER_H
