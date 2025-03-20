#include <iostream>

#include "Truckloads.h"
#include "Reverser.h"


int main(void){
    /*
    int numCrates = 14;
    int loadSize = 3;

    Truckloads t;

    std::cout << t.numTrucks(numCrates, loadSize) << std::endl;

    */

    Reverser r;
    int reversedNumber = r.reverseDigit(12345);
    std::cout << reversedNumber << std::endl;

    string reversedString = r.reverseString("James");
    std::cout << reversedString << std::endl;
}