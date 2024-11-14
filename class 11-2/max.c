#include <stdio.h>
#include <stdlib.h>

int get_integer()
{
    int value;
    printf("정수를 입력하세요: ");
    scanf("%d", &value);
    return value;
}

int get_max(int x, int y)
{
    if(x > y) return(x);
    else return(y);
}

int main(void)
{
    int a, b;
    a = get_integer();
    b = get_integer();

    printf("두 수 중에서 더 큰 수는 %d 입니다.", get_max(a, b));

    return 0;
}