#include <stdio.h>

int main(){
    int reminder, number, reverse_number = 0; 

    printf("Enter the number : ");
    scanf("%d",&number);
    
    while (number != 0){
        reminder = number % 10;
        reverse_number = reverse_number * 10 + reminder;
        number = number/ 10;

    }

    printf("The reverse number is : %d\n", reverse_number);

    return 0;
}