#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <vector>
#include "subject.h"


class WeatherData : public Subject {
public:
    virtual void registerObserver(Observer* o) override;
    virtual void removeObserver(Observer* o) override;
    virtual void notifyObserver() override;

    virtual int getTemperature() override;
    virtual int getHumidity() override;
    void setMeasurements(int temperature, int humidity);
    void measurementsChanged();

private:
    vector<Observer*> m_observersV; // 0规则
    int m_temperature;
    int m_humidity;
};

// 注册
void WeatherData::registerObserver(Observer* o)
{
    m_observersV.push_back(o);
}

// 删除
void WeatherData::removeObserver(Observer* o)
{
    vector<Observer*>::iterator itr = m_observersV.begin();
    while (itr != m_observersV.end()) {
        if(*itr == o)
        {
            itr = m_observersV.erase(itr);
        }
        else
        {
            itr ++;
        }
    }
}

// 通知观察者
void WeatherData::notifyObserver()
{
    for(int i = 0; i < m_observersV.size(); i++)
    {
        Observer* obs = (Observer*)m_observersV[i];
        obs->update((Subject*) this);
    }
}


void WeatherData::measurementsChanged()
{
    notifyObserver();
}

void WeatherData::setMeasurements(int temperature, int humidity)
{
    m_temperature = temperature;
    m_humidity = humidity;
    measurementsChanged();
}


int WeatherData::getHumidity()
{
    return this->m_humidity;
}

int WeatherData::getTemperature()
{
    return this->m_temperature;
}

#endif // WEATHERDATA_H














