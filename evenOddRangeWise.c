#include <stdio.h>

int main(){
    int number;

    printf("Enter the number the number : ");
    scanf("%d", &number);

    printf("Even Number is : ");
    for(int i =0; i <= number ;i++){
        if (i % 2 == 0){
            printf("%d ", i);
        }
    }

    printf("\nodd number is : ");
    for (int i =0; i <= number; i++){
        if (i % 2 != 0){
            printf("%d ", i);
        }
    }

    printf("\nPrime number is : ");
    for (int i = 2; i <= number; i++){
        int count = 0;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                count++;
                break;
            }
        }
        if (count == 0){
            printf("%d ", i);
        }
    }

    return 0;
}