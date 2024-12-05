#include <stdio.h>

int main(void){
    int number = 10;
    int *p;
    p = &number;

    printf("number의 값 = %d\n", number);
    *p = 20;   //참조값을 변경
    printf("number의 값 = %d\n", number);

    return 0;
}