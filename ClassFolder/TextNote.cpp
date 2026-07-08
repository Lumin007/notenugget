//
// Created by Ali A on 04.07.26.
//
#include <string>
#include "TextNote.h"
#include "Note.h"
#include "iostream"

using namespace std;

TextNote::TextNote(string t, string c) : Note(t, c) {
    characterCount = content.length();
}

void TextNote::display() const {
    cout << "--------------------------\n";
    cout << "Title: " << title << "\n" << content << "\n\n";
}

string TextNote::serialize() const {
    return "TEXT|" + title + "|" + content;
}

void TextNote::setContent(const string& newContent) {
    content = newContent;
    characterCount = content.length();
}
