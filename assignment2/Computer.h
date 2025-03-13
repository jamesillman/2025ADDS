#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

#include <iostream>
#include <string>

class Computer : public Player {        
    private:
        std::string name;
        char move;
    public:
        char makeMove() override;
        std::string getName() override;

        Computer();
        ~Computer() {}

};

#endif  // COMPUTER_H