#include <iostream>

#include "ClassFolder/CLIUI.h"
#include "ClassFolder/NoteManager.h"


using namespace std;

int main() {
    NoteManager manager("../txtFolder/NuggetDose.txt");

    CLIUI ui(manager);

    ui.start();

    return 0;
}