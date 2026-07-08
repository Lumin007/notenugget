//
// Created by Ali A on 04.07.26.
//

#ifndef NOTENUGGET_TODONOTE_H
#define NOTENUGGET_TODONOTE_H

#include <string>
#include "Note.h"
using namespace std;

class ToDoNote : public Note {
private:
    bool isDone;

public:
    ToDoNote(string t, string c);
    void display() const;
    string serialize() const;
    void toggleDone();
};



#endif //NOTENUGGET_TODONOTE_H
