#include <stdio.h>

int fib(int n);
int main(void){
    int result = fib(10);
    printf("Fib(10) = %d\n", result);
    return 0;
}
int fib(int n){
    printf("fib(%d)\n", n);
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}