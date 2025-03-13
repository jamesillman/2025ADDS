#include "Move.h"
#include "WinTrack.h"
#include <iostream>

#include <string>

int WinTrack::WinningMove() {
    std::string player1_move_string = m1->getName();
    std::string player2_move_string = m2->getName();

    std::cout << player1_move_string;
    std::cout << player2_move_string;

    int player1_move_int;
    int player2_move_int;

    // Convert move string to an integer
    if (player1_move_string == "Rock") {
        player1_move_int = 0;
    } else if (player1_move_string == "Paper") {
        player1_move_int = 1;
    } else if (player1_move_string == "Scissors") {
        player1_move_int = 2;
    } else if (player1_move_string == "Monkey") {
        player1_move_int = 3;
    } else if (player1_move_string == "Robot") {
        player1_move_int = 4;
    } else if (player1_move_string == "Pirate") {
        player1_move_int = 5;
    } else if (player1_move_string == "Ninja") {
        player1_move_int = 6;
    } else if (player1_move_string == "Zombie") {
        player1_move_int = 7;
    }
    // Convert Player 2's move string to an integer
    if (player2_move_string == "Rock") {
        player2_move_int = 0;
    } else if (player2_move_string == "Paper") {
        player2_move_int = 1;
    } else if (player2_move_string == "Scissors") {
        player2_move_int = 2;
    } else if (player2_move_string == "Monkey") {
        player2_move_int = 3;
    } else if (player2_move_string == "Robot") {
        player2_move_int = 4;
    } else if (player2_move_string == "Pirate") {
        player2_move_int = 5;
    } else if (player2_move_string == "Ninja") {
        player2_move_int = 6;
    } else if (player2_move_string == "Zombie") {
        player2_move_int = 7;
    }
    
    std::cout << player1_move_int;
    std::cout << player1_move_int;

    //Order Rock,Paper,Scissors,Monkey,Robot,Pirate,Ninja,Zomibe
    //Outcomes 1 P1 wins, -1 P2 wins, 0 Draw, -2 Invalid Match
    int outcomeArray[8][8] = {
        // R   P   S   M   Rb  Pi  N   Z
        {  0, -1,  1, -2, -2, -2, -2, -2 }, // Rock (0)
        {  1,  0, -1, -2, -2, -2, -2, -2 }, // Paper (1)
        { -1,  1,  0, -2, -2, -2, -2, -2 }, // Scissors (2)
    
        { -2, -2, -2,  0,  1, -1,  1, -1 }, // Monkey (3)
        { -2, -2, -2, -1,  0, -1,  1,  1 }, // Robot (4)
        { -2, -2, -2,  1,  1,  0, -1, -1 }, // Pirate (5)
        { -2, -2, -2, -1, -1,  1,  0,  1 }, // Ninja (6)
        { -2, -2, -2,  1, -1,  1, -1,  0 }  // Zombie (7)
    };

    int outcome = outcomeArray[player1_move_int][player2_move_int];

    return outcome;

}

WinTrack::WinTrack(Move* m1, Move* m2){
    this->m1 = m1;
    this->m2 = m2;
}
