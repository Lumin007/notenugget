#ifndef NOTENUGGET_TEXTNOTE_H
#define NOTENUGGET_TEXTNOTE_H

#include <string>
#include "Note.h"

using namespace std;

class TextNote : public Note {
private:
    int characterCount;

public:
    TextNote(string t, string c);
    void display() const;
    void serialize() const;
    void setContent(const string& newContent);
};

#endif
