//
// Created by Ali A on 04.07.26.
//

#include "ToDoNote.h"
#include <string>
using namespace std;

ToDoNote::ToDoNote(string t, string c) : title(t), content(c), isDone(false) {
}


void ToDoNote::display() const {

}

void ToDoNote::serialize() const {

}

void ToDoNote::toggleDone() {
    isDone = !isDone;
}
