//
// Created by Ali A and Lumin007
//

#include "CLIUI.h"
#include <iostream>
#include <string>
#include "NoteManager.h"
#include "Note.h"
#include "TextNote.h"
#include "ToDoNote.h"
#include <stdexcept>

using namespace std;

CLIUI::CLIUI(NoteManager& m) : manager(m){
}

void CLIUI::start() {
    while (true) {
        printMenu();
        handleUserInput();
    }
}
void CLIUI::printMenu() {
    cout << "\n==============================\n";
    cout << "       NOTE-NUGGET        \n";
    cout << "==============================\n";
    cout << "[1] Notizen anzeigen\n";
    cout << "[2] Neue Text-Notiz hinzufuegen\n";
    cout << "[3] Neue Todo-Notiz hinzufuegen\n";
    cout << "[4] Notiz loeschen\n";
    cout << "[0] Programm beenden\n";
    cout << "------------------------------\n";
    cout << "Ihre Wahl: ";
}

istream operator>>(const istream & cin, const shared_ptr<Note> & rhs);

void CLIUI::handleUserInput() {
    int choice;
    cin >> choice;

    string title = "", content = "";
    shared_ptr<Note> newNote;

    switch (choice) {
        case 1:
            manager.listNotes();
            break;
        case 2:
            cin.ignore();

            cout << "Bennene die Notiz:" << endl;
            getline(cin, title);

            cout << "Feuge Inhalt hinzu:" << endl;
            getline(cin, content);

            newNote = make_shared<TextNote>(title, content);
            manager.addNote(newNote);

            cout << "=> Text-Notiz wurde hinzugefuegt...\n";
            break;
        case 3:
            cin.ignore();

            cout << "Bennene die Todo-Notiz:" << endl;
            getline(cin, title);

            cout << "Feuge Inhalt/Aufgabe hinzu:" << endl;
            getline(cin, content);

            newNote = make_shared<ToDoNote>(title, content);
            manager.addNote(newNote);

            cout << "=> Todo-Notiz wurde hinzugefuegt...\n";
            break;
        case 4:
            cout << "=> Notiz wird geloescht...\n";
            break;
        case 0:
            cout << "Programm wird beendet. Auf Wiedersehen!\n";
            exit(0);
        default:
            cout << "[FEHLER] Bitte eine Zahl zwischen 0 und 6 waehlen.\n";
            break;
    }
}
