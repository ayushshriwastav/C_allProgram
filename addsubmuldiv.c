#include <stdio.h>


int main()
{
    int num, count, i, sum = 0, sub, mul; float div;

    printf("Enter the number how much you want : " );
    scanf("%d", &count);

    if (count <= 0){
        printf("Invalid Number");
        return 1;
    }


    for(i=1;i<=count;i++){                             /// logic 
         printf("Enter the number %d : ", i); 
         scanf("%d", &num);
         sum += num;                         

         if (i == 1){
             sub = num;
             mul  = num;
             div = num;
         }
         else {
            sub -= num;
            mul *= mul;      
            if(num != 0){
                div /= num;
            }
            else {
                printf("Invalid Number for Division");
            }
         }
    }
       
    printf("Addition : %d\n", sum);
    printf("Subtaction : %d\n", sub);
    printf("Multiplication : %d\n", mul);
    printf("division : %f\n", div);

    return 0;
}