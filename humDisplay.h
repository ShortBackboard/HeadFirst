#ifndef HUMDISPLAY_H
#define HUMDISPLAY_H
#include "subject.h"
#include "display.h"

class HumDisplay : public Observer, public Display{
public:
    HumDisplay(Subject* weatherData);
    virtual void update(Subject* subject) override; // 传递一个指针不用指定特定的元素
    virtual void display() override;
private:

    Subject* m_weatherData; // 构造需要weather对象，方便后续的取消注册
    int m_humidity;
};

HumDisplay::HumDisplay(Subject* weatherData)
{
    m_weatherData = weatherData;
}

void HumDisplay::display()
{
    cout << "当前湿度为 " << m_weatherData->getHumidity() << " %" << endl;
}

void HumDisplay::update(Subject* subject)
{
    m_weatherData = subject;
    cout << "湿度显示器更新: ";
    display();
}
#endif // HUMDISPLAY_H
