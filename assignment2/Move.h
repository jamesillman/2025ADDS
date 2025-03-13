#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <string>
#include "Player.h"

class Move{        

        
    public:

        std::string move;
        std::string getName();

        Move(std::string move);


};

#endif  // MOVE_H