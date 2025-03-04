#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>

class Computer : public Player {        
    private:
        std::string name = "Computer";
        char move = 'R';
    public:
        Computer();

};

#endif  // COMPUTER_H