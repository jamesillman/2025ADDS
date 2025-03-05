#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"

int main(void) {
    Human p1; 
    Computer p2;
    Referee ref;

    std::string result = ref.refGame(p1, p2);

    if (result.empty()) {
        std::cout << "It's a Tie" << std::endl;
    } else {
        std::cout << result << " Wins" << std::endl;
    }
        





    return 0;
};