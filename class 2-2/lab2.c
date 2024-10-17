#include <stdio.h>

/*int lab2(){
    int x1, x2, x3, x4, x5;
    
    printf("식별 번호를 입력하시오 : ");
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);

    
}*/

int lab2pro(void)
{
    int x1, x2, x3, x4, x5;
    int sum;

    printf("식별 번호를 입력하시오 : ");
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);

    sum = x1 + x2 + x3 + x4 + x5;
    printf("합 : %d\n", sum);
    int digit = sum % 10;

    printf("체크 디지트는 %d 입니다\n", digit);
    return 0;
}