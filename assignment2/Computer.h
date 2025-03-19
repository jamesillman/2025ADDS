#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

#include <iostream>
#include <string>

class Computer : public Player {        
    public:
        Move* makeMove() override;
        std::string getName() override;

};

#endif  // COMPUTER_H