#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
#include "Player.h"
#include "WinTrack.h"

class Referee {        

    public:
        Player* refGame(Human* p1, Computer* p2);
        

};

#endif  // REFEREE_H