#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "Player.h"

class Human : public Player {        
    public:
        std::string name;
        char move;

        char makeMove() override;
        std::string getName() override;

        Human(std::string name = "Human");
        ~Human() {}
        

};

#endif  // HUMAN_H