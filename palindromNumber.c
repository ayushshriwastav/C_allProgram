#include <stdio.h>

int main(){
    long int reverse_number = 0, number;
    int reminder = 0; 
    printf("Enter any number : ");
    scanf("%d", &number);

    long int palindrom_number = number;         //// store the number in other variable

    while (number != 0){                        // logic here 
        reminder = number % 10;                  
        reverse_number = reverse_number * 10 + reminder;
        number = number / 10;     // remove the last number 
    }

    if (palindrom_number  == reverse_number){
        printf("%d is palindrom number \n", palindrom_number);
    }
    else{
        printf("%d is not a palinfrom number \n", palindrom_number);
    }

    return reverse_number;
}