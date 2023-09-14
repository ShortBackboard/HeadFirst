#ifndef ITERATOR_H
#define ITERATOR_H
#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

class MyIterator {
public:
    virtual bool hasNext() = 0;
    virtual string next() = 0;
};

#endif // ITERATOR_H
