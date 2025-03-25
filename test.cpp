#include <iostream>
using namespace std;


int fibTail(int n, unsigned long long curr, unsigned long long next){
    if (n==1){
        return next;
    } else {
        return fibTail(n-1, next, curr+next);
    }

}

bool pali(string word, int left, int right){
    if (left>=right){
        return true;
    }
    if ((word[left]) != word[right]){
        return false;
    }
    return pali(word, left+1,right-1);
}

int main(void){

    cout << pali("race3car",0,6);

}