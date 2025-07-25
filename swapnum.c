#include <stdio.h>

int main(){

    int a, b;
    printf("Enter the number for swapping : ");
    scanf("%d%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a -b;

    printf(" the swapped number : %d %d", a, b);

    return 0;

}