#ifndef NOTENUGGET_TEXTNOTE_H
#define NOTENUGGET_TEXTNOTE_H

#include <string>
using namespace std;

class TextNote {
private:
    int characterCount;
    string title;
    string content;

public:
    TextNote(string t, string c);
    void display() const;
    void serialize() const;
    void setContent(const string& newContent);
};

#endif
