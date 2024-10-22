//반복을 이용하여서 구구단을 출력하여보자. 출력할 단은 사용자가 정한다.
#include <stdio.h>

int main(void)
{
    int i = 1;
    int dan = 2;
    while( dan < 10){
        i=1;
    while (i <= 9)
    {
        printf("%d * %d = %d\n", dan, i, dan * i);
        i++;
    }
    dan++;
    printf("\n");
    }
    return 0;
}



int first(void)
{
    int i = 1;
    int dan = 1;
    printf("구구단 몇 단을 출력할까요? ");
    scanf("%d", &dan);
    while (i <= 9)
    {
        printf("%d * %d = %d\n", dan, i, dan * i);
        i++;
    }
    return 0;
}