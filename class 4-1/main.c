#include <stdio.h>

int main(void) {
    double radius;
    printf("반지름 값을 입력하시오: ");
    scanf("%lf", &radius);
    printf("%.2lf", radius);
    return 0;
}