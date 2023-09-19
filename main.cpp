/*
 * 责任链模式
 *
 * date:2023-9-19
*/

#include "gradeHandler.h"

int main()
{
    cout << "请输入分数: ";
    int grade;
    cin >> grade;

    GradeHandler* gradeHandler = new AHandler();
    gradeHandler->handle(grade);
}
