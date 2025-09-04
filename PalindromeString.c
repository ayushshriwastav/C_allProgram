#include <stdio.h>
#include <string.h>

int main(){
    int size;
    
    printf("Enter the size of string: ");
    scanf("%d",&size);
    getchar();

    char str[size];
    char rev[size];
    
    printf("Enter the string: ");
    scanf("%[^\n]",str);

    printf("The string is: ");
    for(int i=0;i<strlen(str);i++){
        printf("%c",str[i]);
    }

}