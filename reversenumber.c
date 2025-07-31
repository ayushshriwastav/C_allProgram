#include <stdio.h>

int main(){
    int reminder;
    long int number = 0, reverse_number = 0; 

    printf("Enter the number : ");
    scanf("%d",&number);
    
    while (number != 0){
        reminder = number % 10;                              // reminder number save in reminder variable
        reverse_number = reverse_number * 10 + reminder;
        number = number/ 10;              // remove the last number 

    }

    printf("The reverse number is : %d\n", reverse_number);

    return reverse_number;
}