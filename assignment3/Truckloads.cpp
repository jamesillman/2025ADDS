#include "Truckloads.h"
#include <iostream>



Truckloads::Truckloads(){}
Truckloads::~Truckloads() {}


int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        return 1;
    }
    
    int L = numCrates / 2;
    int R = numCrates - L;
    
    return numTrucks(L, loadSize) + numTrucks(R,loadSize);

}