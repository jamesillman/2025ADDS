#ifndef REVERSER_H
#define REVERSER_H


#include <iostream>
#include <string>

using namespace std;

class Reverser {
public:
    Reverser();
    ~Reverser();

    int reverseDigit(int value, int acc);
    int reverseDigit(int value);

    string reverseString(string characters, string acc);
    string reverseString(string characters);
};






#endif  // REVERSER_H