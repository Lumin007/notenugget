//
// Created by Ali A on 04.07.26.
//

#include "NoteManager.h"

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <ostream>
#include <sstream>
#include <iostream>
#include "Note.h"
#include "NoteManager.h"
#include <fstream>

#include "TextNote.h"
#include "ToDoNote.h"

using namespace std;

NoteManager::NoteManager(string fileName) {
    this->fileName = fileName;
    loadFromFile();
}

void NoteManager::addNote(shared_ptr<Note> newNote) {
    notes.push_back(newNote);
}

void NoteManager::removeNote(int index) {
    if (index >= 0 && index < notes.size()) {
        string geloeschterTitel = notes[index]->getTitle();

        notes.erase(notes.begin() + index);
        cout << geloeschterTitel << " wurde erfolgreich geloescht!" << endl;
    }
    else {
        cout << "Ungueltiger Index! Konnte nicht geloescht werden." << endl;
    }
}

void NoteManager::listNotes() {
    if (notes.empty()) {
        cout << "Keine Notizen vorhanden!\n";
        return;
    }

    for (int i = 0; i < notes.size(); i++) {

        cout << "[" << i+1 << "] ";
        notes[i]->display();
    }
}

void NoteManager::saveToFile() {
    ofstream file(fileName);

    if (!file.is_open()) {
        cout << "NoteManager::saveToFile: Kann nicht geöffnet werden!" << endl;
        return;
    }

    for (int i = 0; i < notes.size(); i++) {
        file << notes[i]->serialize() << endl;
    }

    file.close();
    cout << "Notizen wurden erfolgreich gespeichert!" << endl;
}

void NoteManager::loadFromFile() {
    ifstream file(fileName);

    if (!file.is_open()) {
        return;
    }

    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string type, title, content;

        getline(ss, type, '|');
        getline(ss, title, '|');
        getline(ss, content, '|');

        if (type == "TEXT") {
            addNote(make_shared<TextNote>(title, content));
        }
        else if (type == "TODO") {
            string status;
            getline(ss, status, '|');

            shared_ptr<ToDoNote> todo = make_shared<ToDoNote>(title, content);

            if (status == "1") {
                todo->toggleDone();
            }

            addNote(todo);
        }
    }

    file.close();
}



void NoteManager::toggleTodo(int index) {
    index = index-1;
    if (index >= 0 && index < notes.size()) {

        shared_ptr<ToDoNote> todo = dynamic_pointer_cast<ToDoNote>(notes[index]);

        if (todo) {
            todo->toggleDone();
            cout << "Status von '" << todo->getTitle() << "' wurde erfolgreich geaendert!\n";

            saveToFile();
        } else {
            cout << "Fehler: Die Notiz an Index [" << index << "] ist keine Todo-Notiz!\n";
        }

    } else {
        cout << "Ungueltiger Index!\n";
    }
}