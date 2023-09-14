#ifndef COMPUTERITERATOR_H
#define COMPUTERITERATOR_H
#include "myIterator.h"
#include "computerMajor.h"

class ComputerIterator : public MyIterator {
public:
    ComputerIterator(vector<string> v);
    virtual bool hasNext() override;
    virtual string next() override;
private:
    vector<string> m_majors;
    int m_idx = 0;
};

ComputerIterator::ComputerIterator(vector<string> v)
{
    m_majors  = v;
}

bool ComputerIterator::hasNext()
{
    if(m_idx <= m_majors.size())
    {
        return true;
    }
    else return false;
}

string ComputerIterator::next()
{
    if(hasNext()) return m_majors[ m_idx++ ];
}


#endif // COMPUTERITERATOR_H
