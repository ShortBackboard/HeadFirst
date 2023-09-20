/*
 * 解释器模式
 *
 * date:2023-9-20
*/

#include "expression.h"

int main()
{
    vector<string> contexts;
    string context;

    cout << "输入表达式(!结尾)：" << endl;

    while(cin>>context)
    {
        if(context == "!") break;
        contexts.push_back(context);
    }

    Expression* expressions;
    for(int i = 0; i < contexts.size(); i++)
    {
        if(contexts[i] == "quack")
        {
            expressions = new Quack();
            expressions->interpret();
        }
        else if(contexts[i] == "left")
        {
            expressions = new Left();
            expressions->interpret();
        }
    }


}
