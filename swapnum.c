#include <stdio.h>

int main(){

    int a, b;
    printf("Enter the number for swapping : ");
    scanf("%d %d", &a, &b);

    a = a + b;        // logic for two swaping number
    b = a - b;
    a = a - b;

    printf(" the swapped number : %d %d", a, b);

    return 0;

}