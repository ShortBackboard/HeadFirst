#ifndef MATHMAJOR_H
#define MATHMAJOR_H
#include "major.h"
#include "mathIterator.h"


class MathMajor : public Major {
public:
    virtual MyIterator* createIterator() override;

    list<string> m_majors = {"应用数学", "数学类"};
    };

    MyIterator* MathMajor::createIterator()
    {
        return new MathIterator(m_majors);
    }
#endif // MATHMAJOR_H
