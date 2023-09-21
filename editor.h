#ifndef EDITOR_H
#define EDITOR_H
#include "editorMemento.h"

class Editor {
public:
    void setContent(string content)
    {
        m_content = content;
    }

    string getContent()
    {
        return  m_content;
    }

    EditorMemento* createEditorMemento(string content)
    {
        return new EditorMemento(content);
    }

    void restoreMemento(EditorMemento* editorMemento)
    {
        m_content = editorMemento->getContent();
    }

    void display()
    {
        cout <<  "当前文本编辑器内容：" << m_content << endl;
    }

private:
    string m_content;
};

#endif // EDITOR_H
