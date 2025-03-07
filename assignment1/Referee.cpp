#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>


Player* Referee::refGame(Human* p1, Computer* p2) {
    std::string name1 = p1->getName();

    char player1_move = p1->makeMove();
    char player2_move = p2->makeMove();

    

    switch (player1_move) {
        case 'R':
            return nullptr;
        case 'P':
            return p1;
        case 'S':
            return p2;
        
    }
    //return nullptr;
}