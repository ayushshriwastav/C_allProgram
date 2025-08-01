#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int startLength = 0;
    int j = 0;
    int start = 0;
 

    printf("Enter the word or sentence : ");
    scanf("%[^\n]", name);

     printf("Given Name : ");
    for (int i=0;i <= strlen(name);i++){
       printf("%c", name[i]);
    }

    printf("\n");


   //reverse character without space 
    int charLength = strlen(name);
    int lastLength = charLength -1;
    
    while (startLength < lastLength){
        char temp = name[startLength];
        name[startLength] = name[lastLength];
        name[lastLength] = temp;

        startLength++;
        lastLength--;
    }

    printf("The reverse character is : %s\n", name);
    printf("Length: %d\n", (int)strlen(name));

    int reversecharLength = strlen(name);

    
    while (j <= reversecharLength){
        if (name[j] == ' ' || name[j] == '\0'){
            int left = start;
            int right = j-1;
            while (left < right){
                char temp = name[left];
                name[left] = name[right];
                name[right] = temp;
                left++;
                right--;

            }
            start = j +1;
        }
        j++;
    }
    

    printf("The reverse character without space is : %s\n", name);

    return 0;

}



// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[100];
    
//     printf("Enter the word or sentence : ");
//     scanf(" %[^\n]", name);  // note space before %[^\n] to handle newline buffer

//     printf("Given Name : ");
//     for (int i = 0; i < strlen(name); i++) {
//         printf("%c", name[i]);
//     }
//     printf("\n");

//     // Reverse entire string
//     int len = strlen(name);
//     for (int i = 0; i < len / 2; i++) {
//         char temp = name[i];
//         name[i] = name[len - 1 - i];
//         name[len - 1 - i] = temp;
//     }

//     printf("The reverse character is : %s\n", name);
//     printf("Length: %d\n", len);

//     // Reverse each word in the reversed string
//     int start = 0;
//     for (int i = 0; i <= len; i++) {
//         if (name[i] == ' ' || name[i] == '\0') {
//             int left = start;
//             int right = i - 1;
//             while (left < right) {
//                 char temp = name[left];
//                 name[left] = name[right];
//                 name[right] = temp;
//                 left++;
//                 right--;
//             }
//             start = i + 1;
//         }
//     }

//     printf("The reverse character without space is : %s\n", name);

//     return 0;
// }
