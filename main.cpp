/*
 * 迭代器模式
 *
 * date:2023-9-14
*/

#include "computerMajor.h"
#include "mathMajor.h"

void printMajor(MyIterator* myIteraor)
{
    while (myIteraor->hasNext())  cout << myIteraor->next() << endl;
}



int main()
{
    cout << "数学学院的专业有： " << endl;

    Major* major = new MathMajor();
    MyIterator* myIterator = major->createIterator();
    printMajor(myIterator);

    cout << endl;

    cout << "计算机学院的专业有：" << endl;
    major = new ComputerMajor();
    myIterator = major->createIterator();
    printMajor(myIterator);


}
