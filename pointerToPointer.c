#include <stdio.h>

int main() {
    int x = 10;

    int *p = &x;     // pointer to int
    int **pp = &p;   // pointer to pointer

    printf("x = %d\n", x);
     printf("address of x = %p\n", &x);
    printf("p = %p\n", p);
    printf("address of p = %p\n", &p);
    printf("pp = %p\n", pp);

    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);

    return 0;
}