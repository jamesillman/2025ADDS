#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
#include "Player.h"

class Referee {        
    private:

    public:
        Player* refGame(Human&, Computer&);

        Referee() {}
        

};

#endif  // REFEREE_H