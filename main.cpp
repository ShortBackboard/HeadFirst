/*
 * 外观模式
 *
 * date:2023-9-13
*/

#include <memory>
#include "theaterFacade.h"

int main()
{
    cout << "观看DVD\n" << endl;

    auto theaterFacade = make_shared<TheaterFacade>();
    theaterFacade->watchDvd();

    cout << "\n\n观看完毕\n" << endl;
    theaterFacade->closeDvd();
}
