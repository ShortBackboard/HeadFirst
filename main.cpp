/*
 * 原型模式
 *
 * date:2023-9-21
*/

#include "resume.h"

int main()
{
    cout << "原始简历：" << endl;
    Resume* r1 = new ResumeA("小A", "熟悉C++");
    r1->display();

    cout << "\n基于原始简历修改的新简历(浅拷贝)：" << endl;

    //由于是直接在内存中拷贝，构造函数不会执行。
    auto r2 = r1->clone();

    r2->setSkill("精通C++ STL");
    r2->display();

}
