//
// Created by Ali A on 04.07.26.
//

#include "Note.h"

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

Note::Note(string title, string content) {
    this->title = title;
    this->content = content;
}

Note::~Note() {}

void Note::display() {
    cout << this->title << " " << this->content << endl;
}

string Note::serialize() {
    return "TEXT|" + title + "|" + content;
}

string Note::getTitle() {
    return this->title;
}
