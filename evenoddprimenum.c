#include <stdio.h>

int main(){

    int choice, count;
    int number;

    printf("Select operation\n");
    printf("1. Check Even and Odd Number \n");
    printf("2. Check Prime Number \n");
    printf("Choose your choice : ");
    scanf("%d", &choice);

    if (choice < 1){
        printf("Invalid Input! Please atleast one number...\n");
        return 1;
    }
    
    printf("How much you want enter the number : ");
    scanf("%d", &count);

    for (int i = 1; i<= count;i++){
        printf("Enter the number : ",i + 1 );
        scanf("%d", &number);

        switch(choice){
            case 1:
            if (number % 2 == 0){
             printf("%d is even number \n", number);  
            }
            else {
                printf("%d is odd number \n", number);
            }
            break;
            case 2:

            break;
            default :
            break;
        }
    }
    return 0;
}