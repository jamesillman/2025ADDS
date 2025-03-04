#include "Player.h"
#include "Human.h"
#include <iostream>


Human::Human(std::string name) {
    if (name.empty()) {
        this->name = name;
    }
    
}


void Human::makeMove() {
    char m;
    std::cout << "Enter move: ";
    std::cin >> m;
    this->move = m;
}

void Human::getName() {
    std::string n;
    std::cout << "Enter name: ";
    std::cin >> n;
    this->name = n;
}

