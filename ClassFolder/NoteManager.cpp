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

}

void NoteManager::listNotes() {
    if (notes.empty()) {
        cout << "keine Notizen vorhanden..." << endl;
        return;
    }

    for (int i = 0; i < notes.size(); i++) {
        cout << "------------------------------" << endl;
        cout << i + 1 << ":" << endl;
        notes[i]->display();
    }
}

void NoteManager::saveToFile() {
    ofstream file("../txtFolder/NuggetDose");

    if (!file.is_open()) {
        cout << "Speicherdatei konnte nicht geoeffnet werden!" << endl;
        return;
    }

    for (const auto& note : notes) {
        file << note->serialize() << endl;
    }

    file.close();
    cout << "Alle Notizen wurden erfolgreich in einer Datei gespeichert!" << endl;

}