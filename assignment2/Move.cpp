#include "Move.h"
#include <iostream>

#include <string>

std::string Move::getName(){
    //std::cout << move;
    return move;
}


Move::Move(std::string move) {
    this->move = move;
}