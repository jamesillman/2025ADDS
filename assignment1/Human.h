#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "Player.h"

class Human : public Player {        
    private:
        std::string name;
    public:

        char makeMove() override;
        std::string getName() override;

        Human(std::string name = "Human");
        

};

#endif  // HUMAN_H