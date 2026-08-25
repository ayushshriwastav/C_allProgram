
// This code demonstrates the use of function pointers in C. It defines a function `add` that takes two integers, adds them, and returns a pointer to the result. 
//The main function assigns the address of the `add` function to a function pointer and then calls it to get the result of adding two numbers.
/*#include <stdio.h>

int *add(int a, int b) {
    static int sum;
    sum = a + b;
    return &sum;
}

int main() {
    int* (*funptr)(int, int);

    funptr = &add;         // Assign the address of the add function to the function pointer

    int *result = funptr(5,3);

    printf("Result of addition is: %d\n", *result);
    return 0;
}*/

// This code demonstrates the use of function pointers in C. It defines a function `add` that takes two integers, adds them, and returns a pointer to the result.
/*#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funptr)(int, int);

    funptr = &add;         // Assign the address of the add function to the function pointer

    int result = funptr(5,3);

    printf("Result of addition is: %d\n", result);
    return 0;
}*/

///