//팩토리얼 값을 반복루프로 계산해보자
//5!를 계산해보자
#include <stdio.h>

int main(void)
{
    int i = 1;
    int factorial = 1;
    while (i <= 5)
    {
        factorial *= i;
        i++;
    }
    printf("5!은 %d입니다.\n", factorial);
    return 0;
}   