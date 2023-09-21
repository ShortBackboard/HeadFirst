/*
 * 访问者模式
 *
 * date:2023-9-21
*/

#include "visitor.h"

int main()
{
    Place* school = new School("CQNU");
    Visitor* mayor = new Mayor();
    Visitor* parents = new Parents();

    mayor->visitSchool(school);
    puts("");
    parents->visitSchool(school);
}
