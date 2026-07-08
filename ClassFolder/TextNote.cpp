//
// Created by Ali A on 04.07.26.
//
#include <string>
#include "TextNote.h"
#include "Note.h"

using namespace std;

TextNote::TextNote(string t, string c) : Note(t, c) {
    characterCount = content.length();
}

void TextNote::display() const {

}

void TextNote::serialize() const {

}

void TextNote::setContent(const string& newContent) {
    content = newContent;
    characterCount = content.length();
}
