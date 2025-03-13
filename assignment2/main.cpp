#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include "WinTrack.h"

int main(void) {
    Human p1("James"); 
    Computer p2;
    Referee ref;

    p1.getName();


    Player* result = ref.refGame(&p1, &p2);

    if (result == nullptr) {
        std::cout << "It's a Tie" << std::endl; 
    } else {
        std::cout << result->getName() << " Wins" << std::endl;
    }
    //comment


    return 0;
};