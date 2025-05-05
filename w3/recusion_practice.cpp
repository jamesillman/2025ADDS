#include <iostream>
using namespace std;

int e_1(int n) {
    if (n == 0) {
        return 0;
    }

    return n + e_1(n-1);
}


int e_2(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }

    return e_2(n-1) + e_2(n-2);
}

int e_3(int x, int n) {
    if (n == 0) {
        return 1;
    }

    return x * e_3(x, n-1);
} 


int main(void) {


    cout << e_3(234, 0) << endl;



}