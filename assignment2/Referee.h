#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
#include "Player.h"
#include "WinTrack.h"

class Referee {        

    public:
        Player* refGame(Player* p1, Player* p2);
        

};

#endif  // REFEREE_H