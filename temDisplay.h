#ifndef TEMDISPLAY_H
#define TEMDISPLAY_H
#include "subject.h"
#include "display.h"

class TemDisplay : public Observer, public Display{
public:
    TemDisplay(Subject* weatherData);
    virtual void update(Subject* subject) override; // 传递一个指针不用指定特定的元素
    virtual void display() override;

private:
    Subject* m_weatherData; // 构造需要weather对象，方便后续的取消注册
    int m_temperature;
};

TemDisplay::TemDisplay(Subject* weatherData)
{
    m_weatherData = weatherData;
}

void TemDisplay::display()
{
    cout << "当前温度为 " << m_weatherData->getTemperature() << " 度" << endl;
}

void TemDisplay::update(Subject* subject)
{
    m_weatherData = subject;
    cout << "温度显示器更新: ";
    display();
}


#endif // TEMDISPLAY_H
