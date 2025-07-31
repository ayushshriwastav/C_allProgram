#include <stdio.h>
#include <string.h>

int main(){
    char name[100];

    printf("Enter the name : ");
    scanf("%[^\n]", name);

    printf("Given Name : ");
    for (int i=0;i <= strlen(name);i++){
       printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}