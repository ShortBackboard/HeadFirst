#ifndef VISITOR_H
#define VISITOR_H
#include "place.h"

class Visitor {
public:
    virtual void visitSchool(Place* place) = 0;
    virtual void visitEnterprice(Place* place) = 0;
    virtual void handle() = 0;
};

class Mayor : public Visitor {
public:
    virtual void visitSchool(Place* place) override
    {
        place->accept();
        handle();
    }

    virtual void visitEnterprice(Place* place) override
    {
        place->accept();
        handle();
    }

    virtual void handle() override
    {
        cout << "市长检查，进行一系列处理" << endl;
    }
};

class Parents : public Visitor {
public:
    virtual void visitSchool(Place* place) override
    {
        place->accept();
        handle();
    }

    virtual void visitEnterprice(Place* place) override
    {
        place->accept();
        handle();
    }

    virtual void handle() override
    {
        cout << "家长参观，进行一系列处理" << endl;
    }
};



#endif // VISITOR_H
