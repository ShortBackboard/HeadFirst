#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H
#include "command.h"
#include "light.h"

class LightOffCommand : public Command {
public:
    virtual void execute() override;
    virtual void undo() override;
private:
    Light* m_light = new Light();
};

void LightOffCommand::execute()
{
    m_light->off();
}

void LightOffCommand::undo()
{
    m_light->on();
}
#endif // LIGHTOFFCOMMAND_H
