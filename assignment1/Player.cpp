#include "Player.h"
#include <iostream>

Player::Player(std::string name, char move) {
    this->name = name;
    this->move = move;
    
}


void Player::makeMove(char move) {
    this->move = move;
}

void Player::getName(std::string name) {
    this->name = name;
}

