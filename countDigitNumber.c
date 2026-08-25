#include <stdio.h>

int main(){
    int number, count = 0;

    printf("Enter the number : ");
    scanf("%d", &number);

    while (number > 0){
        number = number / 10;
        count++;
    }

    printf("Number of digits is : %d", count);
}