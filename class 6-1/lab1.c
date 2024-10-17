//윤년 구하기
#include <stdio.h>

int main(void) {
    int year, result;

    printf("Enter a year: ");
    scanf("%d", &year);

    result = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("윤년 : %d\n", result);
    return 0;
}