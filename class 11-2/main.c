#include <stdio.h>
#include <stdlib.h>

int get_integer()
{
    int value;
    printf("정수를 입력하세요: ");
    scanf("%d", &value);
    return value;
}

int main(void) {
    int result;
    result = get_integer();

    printf("%d", result);

    return 0;
}