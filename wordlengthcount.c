#include <stdio.h>
#include <string.h>

int main(){
    char name[100];

    printf("Enter the word or sentence : ");
    scanf("%[^\n]", name);

     printf("Given Name : ");
    for (int i=0;i <= strlen(name);i++){
       printf("%c", name[i]);
    }

    printf("\n");

    printf("The length : %d", strlen(name));     //first method

    return 0;
}