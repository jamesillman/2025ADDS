#include "Computer.h"
#include <iostream>



Move* Computer::makeMove() {
    Move* move = new Move("Rock");
    return move;
}


std::string Computer::getName() {
    return "Computer";
}
