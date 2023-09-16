#ifndef HTTPANALYZE_H
#define HTTPANALYZE_H
#include "requestLine.h"
#include "requestHeader.h"
#include "requestBlankLine.h"
#include "requestBody.h"

class HttpAnalyze {
public:
    void setCurState(State* s)
    {
        m_curState = s;
    }

    void analyze()
    {
        m_curState->work();
    }
private:
    State* m_line = new RequestLine();
    State* m_header = new RequestHeader();
    State* m_blankLine = new RequestBlankLine();
    State* m_body = new RequestBody();
    State* m_curState;
};

#endif // HTTPANALYZE_H
