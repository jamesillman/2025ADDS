#include <iostream>

#include "Truckloads.h"


int main(void){
    int numCrates = 14;
    int loadSize = 3;

    Truckloads t;

    std::cout << t.numTrucks(numCrates, loadSize) << std::endl;

}