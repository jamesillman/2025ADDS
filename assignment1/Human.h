#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

class Human : public Player {        
    private:
        std::string name;
        char move;
    public:
        void makeMove();
        void getName();

        Human(std::string name = "Human");
        ~Human() {}
        

};

#endif  // HUMAN_H