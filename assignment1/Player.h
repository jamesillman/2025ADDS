#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
    public:
        virtual void makeMove() = 0;
        virtual void getName() = 0;
    
        virtual ~Player() {}
};

#endif  // PLAYER_H