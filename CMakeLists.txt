cmake_minimum_required(VERSION 4.2)
project(notenugget)

set(CMAKE_CXX_STANDARD 23)

add_executable(notenugget main.cpp
        ClassFolder/Note.cpp
        ClassFolder/Note.h
        ClassFolder/NoteManager.cpp
        ClassFolder/NoteManager.h
        ClassFolder/TextNote.cpp
        ClassFolder/TextNote.h
        ClassFolder/ToDoNote.cpp
        ClassFolder/ToDoNote.h
        ClassFolder/CLIUI.cpp
        ClassFolder/CLIUI.h)
