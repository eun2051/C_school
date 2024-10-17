#include <stdio.h>

int main(void)
{
    short s_money = 32767;    //최대값으로 초기화한다  -> 오버플로우 발생

    s_money = s_money + 1;
    printf("s_money = %d\n", s_money);

    return 0;
}

// short -> -32768 ~ 32767 