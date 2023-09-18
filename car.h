#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car {
public:
    virtual void start() = 0;
    virtual void engineBoom() = 0;
    virtual void alarm() = 0;
    virtual void stop() = 0;
};

class ACar : public Car {
public:
    virtual void start() override
    {
        cout << "A类车启动" << endl;
    }

    virtual void engineBoom() override
    {
        cout << "A类车发动引擎" << endl;
    }

    virtual void alarm() override
    {
        cout << "A类车鸣笛" << endl;
    }

    virtual void stop() override
    {
        cout << "A类车停车" << endl;
    }
};

class BCar : public Car {
public:
    virtual void start() override
    {
        cout << "B类车启动" << endl;
    }

    virtual void engineBoom() override
    {
        cout << "B类车发动引擎" << endl;
    }

    virtual void alarm() override
    {
        cout << "B类车鸣笛" << endl;
    }

    virtual void stop() override
    {
        cout << "B类车停车" << endl;
    }
};


#endif // CAR_H
