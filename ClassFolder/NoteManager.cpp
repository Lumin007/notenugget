//
// Created by Ali A on 04.07.26.
//

#include "NoteManager.h"

#include <vector>
#include <string>
#include <memory>

#include "Note.h"

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

}

void NoteManager::saveToFile() {

}

void NoteManager::loadFromFile() {

}