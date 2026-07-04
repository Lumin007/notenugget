//
// Created by Ali A on 04.07.26.
//

#include "Note.h"
#include <string>

using namespace std;

Note::Note(string title, string content) {
    this->title = title;
    this->content = content;
}

Note::~Note() {}

void Note::display() {

}

void Note::serialize() {

}

string Note::getTitle() {
    return this->title;
}
