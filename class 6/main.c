// 정수 2개를 입력받아서 몫과 나머지를 계산하는 프로그램을 살펴보자
#include <stdio.h>

int main(void){
    int a, b;
    printf("두 양의 정수를 입력하시오: ");
    scanf("%d %d", &a, &b);
    printf("%d를 %d로 나눈 몫은 %d, 나머지는 %d입니다.\n", a, b, a/b, a%b);
    return 0;
}