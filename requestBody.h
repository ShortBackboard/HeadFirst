#ifndef REQUESTBODY_H
#define REQUESTBODY_H
#include "state.h"

class RequestBody : public State {
public:
    virtual void work() override
    {
        cout << "解析请求体" << endl;
    }
};
#endif // REQUESTBODY_H
