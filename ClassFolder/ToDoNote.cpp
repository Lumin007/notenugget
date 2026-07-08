//
// Created by Ali A on 04.07.26.
//

#include "ToDoNote.h"
#include <iostream>
#include <string>
using namespace std;

ToDoNote::ToDoNote(string t, string c) :  Note(t, c), isDone(false) {
}


void ToDoNote::display() const {
    cout << "------------------------------\n";
    cout << (isDone ? "[X] " : "[ ] ") << title << "\n";
    cout << "    " << content << "\n";
    cout << "------------------------------\n";
}

void ToDoNote::serialize() const {
    cout << "TODO|" << title << "|" << content << "|" << isDone << "\n";
}

void ToDoNote::toggleDone() {
    isDone = !isDone;
}