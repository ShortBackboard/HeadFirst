/*
 * 蝇量模式
 *
 * date：2023-9-20
*/

#include "ballManager.h"

int main()
{
    cout << "通过蝇量模式获得3个颜色不同的球" << endl;
    BallManager* ballManager = new BallManager();
    ballManager->createBall(3);
}
