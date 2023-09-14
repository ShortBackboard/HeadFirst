#ifndef MAJOR_H
#define MAJOR_H
#include "myIterator.h"

class Major {
public:
    virtual MyIterator* createIterator() = 0;
};

#endif // MAJOR_H
