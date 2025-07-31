#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int count = 0;

    printf("Enter the word or sentence : ");
    scanf("%[^\n]", name);

     printf("Given Name : ");
    for (int i=0;i <= strlen(name);i++){
       printf("%c", name[i]);
    }

    printf("\n");

    printf("The length : %lu\n", strlen(name));     //first method: count length

 
   for(int i =0; name[i] != '\0';i++){
      count++;
   }
   
    printf("The lenght(Using Seconf Method) : %d\n", count);
    return 0;
}