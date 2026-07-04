//
// Created by Ali A on 04.07.26.
//

#ifndef NOTENUGGET_CLIUI_H
#define NOTENUGGET_CLIUI_H

class NoteManager;

class CLIUI {
private:
    NoteManager& manager;

    void printMenu();
    void handleUserInput();

public:
    CLIUI(NoteManager& m);

    void start();
};


#endif //NOTENUGGET_CLIUI_H
