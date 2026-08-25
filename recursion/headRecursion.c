#include <stdio.h>

void fun(int n) {
    if(n == 0)
        return;
    fun(n - 1);   // first operation
    printf("%d ", n);
   
}


int main(){
    fun(5);

    return 0;
}
