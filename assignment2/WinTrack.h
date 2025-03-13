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

        WinTrack(Move* m1, Move* m2);
};

#endif  // WINTRACK_H