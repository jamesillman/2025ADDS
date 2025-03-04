#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
    private:
        std::string name;
        char move;

    public:
        void makeMove(char move);
        void getName(std::string name);
    
        ~Player() {}
        Player(std::string name, char move);

};

#endif  // PLAYER_H