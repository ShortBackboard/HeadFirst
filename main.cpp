/*
 * 命令模式
 *
 * date:2023-9-11
*/

#include "remoteControl.h"
#include "lightOnCommand.h"
#include "lightOffCommand.h"

int main()
{
    // 注意：此遥控器只有3个槽，0,1,2
    RemoteControl* remoteControl = new RemoteControl();

    Command* lightOnCommand = new LightOnCommand();
    Command* lightOffCommand = new LightOffCommand();

    cout << "购买遥控器，使用1号槽来控制灯的开关" << endl;

    remoteControl->setCommand(1, lightOnCommand, lightOffCommand);

    cout << "开灯" << endl;

    remoteControl->onButtonWasPressed(1);

    cout << "关灯" << endl;

    remoteControl->offButtonWasPressed(1);

    cout << "撤销刚才的操作" << endl;

    remoteControl->undoButtonWasPressed();
}
