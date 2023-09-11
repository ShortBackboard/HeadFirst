#ifndef NOCOMMAND_H
#define NOCOMMAND_H

// 空实现
class NoCommand : public Command {
public:
    virtual void execute() override;
    virtual void undo() override;
};

void NoCommand::execute()
{
    cout << "NoCommand" << endl;
}

void NoCommand::undo()
{
    cout << "NoCommand" << endl;
}
#endif // NOCOMMAND_H
