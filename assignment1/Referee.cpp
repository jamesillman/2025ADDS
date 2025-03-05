#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>


std::string Referee::refGame(Human p1, Computer p2) {
    std::string player1_name = p1.getName();
    std::string player2_name = p2.getName();

    char player1_move = p1.makeMove();
    char player2_move = p2.makeMove();

    switch (player1_move) {
        case 'R':
            return nullptr;
        case 'P':
            return player1_name;
        case 'S':
            return player2_name;
        
    }
}