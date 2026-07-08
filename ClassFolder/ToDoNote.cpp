//
// Created by Ali A on 04.07.26.
//

#include "ToDoNote.h"
#include <string>
#include "Note.h"
#include "iostream"
using namespace std;

ToDoNote::ToDoNote(string t, string c) : Note(t, c), isDone(false) {
}


void ToDoNote::display() const {
    cout << "--------------------------\n";
    string status = isDone ? "[X]" : "[ ]";
    cout << status << " TODO: " << title << "\n" << content << "\n\n";
}

string ToDoNote::serialize() const {
    string status = isDone ? "1" : "0";
    return "TODO|" + title + "|" + content + "|" + status;
}

void ToDoNote::toggleDone() {
    isDone = !isDone;
}
