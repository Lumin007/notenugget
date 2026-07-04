//
// Created by Ali A on 04.07.26.
//

#ifndef NOTENUGGET_TODONOTE_H
#define NOTENUGGET_TODONOTE_H

#include <string>
using namespace std;

class ToDoNote {
private:
    bool isDone;
    string title;
    string content;

public:
    ToDoNote(string t, string c);
    void display() const;
    void serialize() const;
    void toggleDone();
};



#endif //NOTENUGGET_TODONOTE_H
