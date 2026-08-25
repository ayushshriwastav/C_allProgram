#include <stdio.h>

void funB(int);

void funA(int n) {
    if(n <= 0)
        return;
    printf("A: %d\n", n);
    funB(n - 1);
}

void funB(int n) {
    if(n <= 0)
        return;
    printf("B: %d\n", n);
    funA(n - 1);
}

int main() {
    funA(5);
    return 0;
}