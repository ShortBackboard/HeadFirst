#ifndef HISTORY_H
#define HISTORY_H
#include "editorMemento.h"

class History {
public:
    void push(EditorMemento* e)
    {
        m_mementos.push_back(e);
    }

    EditorMemento* pop()
    {
        int last = m_mementos.size() - 2;
        m_mementos.pop_back();
        return m_mementos[last];
    }

//private:
    vector<EditorMemento* > m_mementos;
};

#endif // HISTORY_H
