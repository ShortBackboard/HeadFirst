#ifndef COMPUTERMAJOR_H
#define COMPUTERMAJOR_H
#include "major.h"
#include "computerIterator.h"


class ComputerMajor : public Major {
public:
    virtual MyIterator* createIterator() override;

    vector<string> m_majors = {"软件工程", "人工智能"};
};

MyIterator* ComputerMajor::createIterator()
{
    return new ComputerIterator(m_majors);
}

#endif // COMPUTERMAJOR_H
