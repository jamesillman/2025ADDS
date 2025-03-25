#include "Reverser.h"
#include <iostream>

using namespace std;

Reverser::Reverser(/* args */)
{
}

Reverser::~Reverser()
{
}

int Reverser::reverseDigit(int value, int acc){
    if (value == 0) {
        return acc;
    } else if (value < 0) {
        return -1;
    }
    int lastDigit = value%10;
    acc = acc * 10 + lastDigit;
    return reverseDigit(value/10, acc);
}

int Reverser::reverseDigit(int value) {
    return reverseDigit(value, 0);
}

string Reverser::reverseString(string characters, string acc){
    if (characters.empty()) {
        return acc;
    } else if (characters.empty() and acc.empty()){
        return "ERROR";
    }

    char firstChar = characters[0];
    acc = firstChar + acc;

    return reverseString(characters.substr(1), acc);
}

string Reverser::reverseString(string characters) {
    return reverseString(characters, "");
}
