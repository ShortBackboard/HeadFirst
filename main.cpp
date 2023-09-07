/*
 * 观察者模式
 *
 * date:2023-9-7
*/

#include "weatherData.h"
#include "temDisplay.h"
#include "humDisplay.h"

int main()
{
    WeatherData* weatherData = new WeatherData();
    Observer* temDisplay = new TemDisplay(weatherData);
    Observer* humDisplay = new HumDisplay(weatherData);

    weatherData->registerObserver(temDisplay);
    weatherData->registerObserver(humDisplay);

    weatherData->setMeasurements(20, 40);
    puts("");

    cout << "取消注册湿度显示器观察者\n" <<endl;

    weatherData->removeObserver(humDisplay);

    weatherData->setMeasurements(30, 30);

}
