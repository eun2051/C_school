#include <stdio.h>

int main(void){
    float fvalue = 1234567890.12345678901234567890;
    double dvalue = 1234567890.12345678901234567890;
    printf("float형 변수 = %.25f\n", fvalue);
    printf("double형 변수 = %.25lf\n", dvalue);

    return 0;
}
/*
float형 변수는 8자리 정도까지만 출력되고 , 8번쨰 자리수부터는 정확한 값이 나오지 않는다 / 나머지는 0으로 출력된다.
double형 변수는 15자리 정도까지만 출력되고 나머지는 0으로 출력된다.
%.25lf는 소수점 25자리까지 출력하라는 의미이다.
*/