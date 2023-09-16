#ifndef REQUESTHEADER_H
#define REQUESTHEADER_H
#include "state.h"

class RequestHeader : public State {
public:
    virtual void work() override
    {
        cout << "解析请求头" << endl;
    }
};
#endif // REQUESTHEADER_H
