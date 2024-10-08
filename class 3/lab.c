#include <stdio.h>

int wrgn(void){
    int x, y, sum, min, multi, suppl;
    printf("정수 2개를 입력하시오 : ");
    scanf("%d, %d", &x, &y);
    
    sum = x + y;
    min = x - y;
    multi = x * y;
    suppl = x / y;

    printf("%d + %d = %d\n", x, y, sum);
    printf("%d - %d = %d\n", x, y, min);
    printf("%d * %d = %d\n", x, y, multi);
    printf("%d / %d = %d\n", x, y, suppl);
    return 0;
}    

int main(void){
    int x, y;

    printf("정수 2개를 입력하시오 : ");
    scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    return 0;
}