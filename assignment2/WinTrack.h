#ifndef WINTRACK_H
#define WINTRACK_H

#include <iostream>
#include <string>
#include "Move.h"

class WinTrack {
        //int outcome;
        Move* m1;
        Move* m2;
    public:
        int WinningMove();

        WinTrack(Move* move1, Move* move2);
};

#endif  // WINTRACK_H