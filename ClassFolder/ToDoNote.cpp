//
// Created by Ali A on 04.07.26.
//

#include "ToDoNote.h"
#include <string>
#include "Note.h"
using namespace std;

ToDoNote::ToDoNote(string t, string c) : Note(t, c), isDone(false) {
}


void ToDoNote::display() const {

}

void ToDoNote::serialize() const {

}

void ToDoNote::toggleDone() {
    isDone = !isDone;
}
