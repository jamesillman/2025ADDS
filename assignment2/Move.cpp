#include "Move.h"
#include <iostream>

#include <string>

std::string Move::getName(){
    return move;
}


Move::Move(std::string move) {
    if (move.empty()) {
        this->move = move;
    }
    
}