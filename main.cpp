/*
 * 状态模式
 *
 * date:2023-9-16
*/

#include "httpAnalyze.h"

int main()
{
    State* line = new RequestLine();
    State* header = new RequestHeader();
    State* blankLine = new RequestBlankLine();
    State* body = new RequestBody();

    HttpAnalyze* h = new HttpAnalyze();

    cout << "开始解析请求报文" << endl;

    h->setCurState(line);
    h->analyze();

    h->setCurState(header);
    h->analyze();

    h->setCurState(blankLine);
    h->analyze();

    h->setCurState(body);
    h->analyze();

    cout << "解析完毕" << endl;

}
