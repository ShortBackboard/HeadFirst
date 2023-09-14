#ifndef MATHITERATOR_H
#define MATHITERATOR_H
#include "myIterator.h"
#include "mathMajor.h"

class MathIterator : public MyIterator {
public:
    MathIterator(list<string> l);
    virtual bool hasNext() override;
    virtual string next() override;
private:
    list<string> m_majors;
    int m_idx = 0;
};

MathIterator::MathIterator(list<string> l)
{
    m_majors  = l;
}

bool MathIterator::hasNext()
{
    if(m_idx <= m_majors.size())
    {
        return true;
    }
    else return false;
}

string MathIterator::next()
{
    if(hasNext())
    {
        m_idx ++ ;
        string major = m_majors.front();
        m_majors.pop_front(); // 删除第一次元素
        return major;
    }
}

#endif // MATHITERATOR_H
