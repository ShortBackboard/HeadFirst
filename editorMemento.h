#ifndef EDITORMEMENTO_H
#define EDITORMEMENTO_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class EditorMemento {
public:
    EditorMemento(string content)
    {
        m_content = content;
    }

    void setContent(string content)
    {
        m_content = content;
    }

    string getContent()
    {
        return m_content;
    }

private:
    string m_content;
};

#endif // EDITORMEMENTO_H
