#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H
#include "command.h"
#include "noCommand.h"
#include <vector>


class RemoteControl {
public:
    void setCommand(int slot, Command *onCommand, Command *offCommand);
    void onButtonWasPressed(int slot);
    void offButtonWasPressed(int slot);
    void undoButtonWasPressed();

private:
    // 设置只有3个槽
    // vector<Command* > m_onCommands{{(Command*)NULL}, {(Command*)NULL}, {(Command*)NULL}};
    // vector<Command* > m_offCommands{{(Command*)NULL}, {(Command*)NULL}, {(Command*)NULL}};
    // 使用上面的写法也可以，不过更好的写法是使用NoCommand（null object）;

    vector<Command* > m_onCommands{3, (Command *) new NoCommand()};
    vector<Command* > m_offCommands{3, (Command *) new NoCommand()};
    Command* m_undoCommand; // 保存上一次的操作
};

void RemoteControl::setCommand(int slot, Command *onCommand, Command *offCommand)
{
    m_onCommands[slot] = onCommand;
    m_offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPressed(int slot)
{
    m_onCommands[slot]->execute();
    m_undoCommand = m_onCommands[slot];
}

void RemoteControl::offButtonWasPressed(int slot)
{
    m_offCommands[slot]->execute();
    m_undoCommand = m_offCommands[slot];
}

void RemoteControl::undoButtonWasPressed()
{
    m_undoCommand->undo();
}

#endif // REMOTECONTROL_H
