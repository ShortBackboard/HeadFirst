#ifndef REQUESTBLANKLINE_H
#define REQUESTBLANKLINE_H
#include "state.h"

class RequestBlankLine : public State {
public:
    virtual void work() override
    {
        cout << "解析请求空行" << endl;
    }
};
#endif // REQUESTBLANKLINE_H
