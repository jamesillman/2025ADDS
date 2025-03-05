#include "Player.h"
#include "Human.h"
#include <iostream>


Human::Human(std::string name) {
    if (name.empty()) {
        this->name = name;
    }
    
}


char Human::makeMove() {
    return move;
}

std::string Human::getName() {
    return name;
}

