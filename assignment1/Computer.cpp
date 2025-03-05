#include "Computer.h"
#include <iostream>

// Constructor initializes the name and move
Computer::Computer() {
    name = "Computer";
    move = 'R';
}


char Computer::makeMove() {
    return 'R'; //comment
}

std::string Computer::getName() {
    return "Computer";
}
