#include <stdio.h>
#include <stdlib.h>

int get_integer()
{
    int value;
    printf("정수를 입력하세요: ");
    scanf("%d", &value);
    return value;
}

int main(void)
{
    int a, b;
    a = get_integer();
    b = get_integer();

    printf("두수의 합 = %d", a + b);
    return 0;
}