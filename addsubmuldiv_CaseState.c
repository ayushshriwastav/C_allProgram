#include <stdio.h>


int main(){
    
    int choice, count;
    int number;
    int sum = 0, sub = 0 , mul;
    float div;
    
    printf("Select operation \n");
    printf("1. Addition(+) \n");
    printf("2. Subtraction(-) \n");
    printf("3. Multiplication(*) \n");
    printf("4. Division(/) \n");
    
    printf("Enter your choice : ");
    scanf("%d", &choice);

    printf("How much you want number enter : ");
    scanf("%d", &count);

    if(choice < 1){
        printf("This is invalid number. Please Enter a valid countable");
        return 1; 
    }

    for (int i = 1; i <= count;i++){
        printf("Enter the number %d : ", i);
        scanf("%d", &number);
        switch (choice)
        {
        case 1:
        sum += number;
        break;
        case 2:
        if(i == 1){
            sub = number;
        }
        else {
            sub -= number;
        }
        break;
        case 3:
        if(i == 1){
            mul = number;
        }
        else {
            mul *= number;
        }
        case 4:
        if (i == 1){
            div = number;
        }
        else {
            if(number != 0){
             div /= number;
            }
           else {
            printf("Invalid Number for division");
            return 1;
           }
        }
        default:
            break;
        }
       
    }
    printf("The addition is : %d \n", sum);
    printf("The subtraction is : %d \n", sub);
    printf("The multiplication is : %d \n", mul);
    printf("The division is : %d \n", div);

    return 0;
}