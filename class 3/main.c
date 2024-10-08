#include <stdio.h>

int makesureto(void)
{
    int x;
    printf("정수를 입력하시오:");
    scanf("%d", &x);
    printf("입력된 정수 = %d\n", x);
    return 0;
}