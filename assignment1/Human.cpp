#include "Player.h"
#include "Human.h"
#include <iostream>


Human::Human(std::string name) {
    this->name = name;
    
}


char Human::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}

std::string Human::getName() {
    return name;
}

