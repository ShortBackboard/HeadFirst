#ifndef REQUESTLINE_H
#define REQUESTLINE_H
#include "state.h"

class RequestLine : public State {
public:
    virtual void work() override
    {
        cout << "解析请求行" << endl;
    }
};

#endif // REQUESTLINE_H
