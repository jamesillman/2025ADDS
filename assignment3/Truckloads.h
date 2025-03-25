#ifndef TRUCKLOAD_H
#define TRUCKLOAD_H


#include <iostream>
#include <string>



class Truckloads
{
public:
    Truckloads();
    ~Truckloads();

    int numTrucks(int numCrates, int loadSize);
};



#endif  // TRUCKLOAD_H