//
// Created by Ali A on 04.07.26.
//

#ifndef NOTENUGGET_NOTE_H
#define NOTENUGGET_NOTE_H

#include <string>

using namespace std;

class Note {
    protected:
        string title;
        string content;
    public:
        Note(string title, string content);
        virtual ~Note();
        virtual void display() const;
        virtual string serialize() const;
        string getTitle();
};

#endif //NOTENUGGET_NOTE_H