#include <stdio.h>

int main(void){
    double a = 3.6;
    int b;

    b = (int)(a+0.5);
    printf("반올림하기 전의 값=%f\n", a);
    printf("반올림한 값=%d\n", b);
    
    return 0;
}