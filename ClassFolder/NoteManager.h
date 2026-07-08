//
// Created by Ali A on 04.07.26.
//

#ifndef NOTENUGGET_NOTEMANAGER_H
#define NOTENUGGET_NOTEMANAGER_H

#include <vector>
#include <string>
#include <memory>

#include "Note.h"

using namespace std;

class NoteManager {
    private:
        vector<shared_ptr<Note>> notes;
        string fileName;
    public:
        NoteManager(string fileName);
        void addNote(shared_ptr<Note> newNote);
        void removeNote(int index);

        void listNotes();
        void saveToFile();
};

#endif //NOTENUGGET_NOTEMANAGER_H