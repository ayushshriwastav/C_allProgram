#include <stdio.h>

int main(){

    int year;

    printf("Enter the year : ");
    scanf("%d", &year);

    if(year == 0){
        printf("Invalid Year");
        return 1;
    }

    if(year % 4== 0){
       printf("%d year is leap year", year);
    }
    else{
        if(year % 400== 0){
            printf("%d year is leap year", year);
        }
        else{
            printf("% year is not a leap year", year);
        }
    }

    return 1;
}