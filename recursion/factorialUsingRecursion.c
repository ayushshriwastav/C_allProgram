#include <stdio.h>

int fact(int n){
    if (n ==0){
        return 1;   // base case (stopping condition)
    }
    else {
        printf("%d ", n);
        return n*fact(n-1);   // recursive calling 

    }
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("\n%d\n", fact(n));

    return n;
}