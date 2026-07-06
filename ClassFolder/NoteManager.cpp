//
// Created by Ali A on 04.07.26.
//

#include "NoteManager.h"

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <ostream>

#include "Note.h"

#include <fstream>

using namespace std;

NoteManager::NoteManager(string fileName) {
    this->fileName = fileName;
}

void NoteManager::addNote(shared_ptr<Note> newNote) {
    notes.push_back(newNote);
}

void NoteManager::removeNote(int index) {
    if (index >= 0 && index < notes.size()) {
        notes.erase(notes.begin() + index);

        cout << notes[index]->getTitle() << "wurde erfolgreich gelöscht! " << endl;
    }
    else {
        cout << notes[index]->getTitle() << " konnte nicht gelöscht werden" << endl;
    }
}

void NoteManager::listNotes() {
    if (notes.size() == 0) {
        cout << "keine Notizen vorhanden..." << endl;
        return;
    }

    for (int i = 0; i < notes.size(); i++) {
        cout << notes[i]->getTitle() << endl;

        notes[i]->display();
    }
}

void NoteManager::saveToFile() {
    ofstream file(fileName);

    if (!file.is_open()) {
        cout << "NoteManager::saveToFile: Kann nicht geöffnet werden!" << endl;
    }

    for (int i = 0; i < notes.size(); i++) {
        file << notes[i]->serialize() << endl;
    }

    file.close();
    cout << "Notizen wurden erfolgreich gespeichert!" << endl;
}

void NoteManager::loadFromFile() {

}