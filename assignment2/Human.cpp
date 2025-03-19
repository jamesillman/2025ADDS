#include "Player.h"
#include "Human.h"
#include <iostream>

#include "Move.h"

Human::Human(std::string name) {
    this->name = name;
    
}


Move* Human::makeMove() {
    std::string temp_move;
    std::cout << "Enter move: ";
    std::cin >> temp_move;

    Move* move = new Move(temp_move);
    return move;
}

std::string Human::getName() {
    return name;
}

