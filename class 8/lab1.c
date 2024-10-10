//연산자의 우선순위에 대해서 중간에 잘 나온다 고지
#include <stdio.h> 

int main(void){
    int a = 10, b = 3, c = 2;

    int result = a * b/c + b % c - a / b;
    printf("결과값 = %d\n", result);

    return 0;
}