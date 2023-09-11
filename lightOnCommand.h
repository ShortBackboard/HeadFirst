#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include "command.h"
#include "light.h"

class LightOnCommand : public Command {
public:
    virtual void execute() override;
    virtual void undo() override;
private:
    Light* m_light = new Light();
};

void LightOnCommand::execute()
{
    m_light->on();
}

void LightOnCommand::undo()
{
    m_light->off();
}

#endif // LIGHTONCOMMAND_H
