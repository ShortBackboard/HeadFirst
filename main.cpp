/*
 * 备忘录模式
 *
 * date:2023-9-20
*/

#include "editor.h"
#include "history.h"

int main()
{
    Editor* e = new Editor();
    History* h = new History();

    e->setContent("hello");
    h->push(e->createEditorMemento(e->getContent()));


    e->setContent("hello, world!");
    h->push(e->createEditorMemento(e->getContent()));

    e->setContent("hello, world! I am lcy!");
    h->push(e->createEditorMemento(e->getContent()));

    e->display();

    cout << "撤回" << endl;

    e->restoreMemento(h->pop());

    e->display();

    cout << "撤回" << endl;

    e->restoreMemento(h->pop());

    e->display();

}
