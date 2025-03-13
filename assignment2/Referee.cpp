#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "WinTrack.h"
#include <iostream>


Player* Referee::refGame(Human* p1, Computer* p2) {
    std::string name1 = p1->getName();

    Move* player1_move = p1->makeMove();
    Move* player2_move = p2->makeMove();


    WinTrack winning = WinTrack(player1_move, player2_move);

    int outcome = winning.WinningMove();
    
    
    //std::cout << outcome;

    if (outcome == 1) {
        return p1;
    } else if (outcome == -1) {
        return p2;
    } else {
        return nullptr;
    }



    


    //return nullptr;
}