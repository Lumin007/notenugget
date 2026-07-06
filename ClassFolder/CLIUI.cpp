//
// Created by Ali A and Lumin007
//

#include "CLIUI.h"
#include <iostream>
#include <string>
#include <stdexcept> // Wichtig für Try-Catch (invalid_argument)
using namespace std;
#include "NoteManager.h"

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
    cout << "       NOTIZEN-MANAGER        \n";
    cout << "==============================\n";
    cout << "[1] Notizen anzeigen\n";
    cout << "[2] Neue Text-Notiz hinzufuegen\n";
    cout << "[3] Neue Todo-Notiz hinzufuegen\n";
    cout << "[4] Notiz loeschen\n";
    cout << "[5] Notizen speichern\n";
    cout << "[6] Notizen laden\n";
    cout << "[0] Programm beenden\n";
    cout << "------------------------------\n";
    cout << "Ihre Wahl: ";
}
void CLIUI::handleUserInput() {
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            manager.listNotes();
            break;
        case 2:
            cout << "=> Text-Notiz wird hinzugefuegt...\n";
            break;
        case 3:
            cout << "=> Todo-Notiz wird hinzugefuegt...\n";
            break;
        case 4:
            cout << "=> Notiz wird geloescht...\n";
            break;
        case 5:
            manager.saveToFile();
            break;
        case 6:
            manager.loadFromFile();
            break;
        case 0:
            cout << "Programm wird beendet. Auf Wiedersehen!\n";
            exit(0);
        default:
            cout << "[FEHLER] Bitte eine Zahl zwischen 0 und 6 waehlen.\n";
            break;
    }
}