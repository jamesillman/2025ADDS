#include <stdio.h>
int main() {
    char status = 8;
    if (status & 0x7) {
        printf("start");
    } else {
        printf("stop");
    }
}


