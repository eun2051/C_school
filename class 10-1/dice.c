#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dice[6] = {0};  // 주사위의 눈은 6개, 각 눈의 개수를 저장할 배열
    int i, j;

    srand(time(NULL));  // 난수 발생기 초기화

    //100번 주사위를 던져서 배열에 저장
    for (i = 0; i < 100; i++)
    {
        int result = rand() % 6; //주사위 값 생성
        dice[result]++;   // 주사위 값이 나올 때마다 해당 배열 요소 증가
    }
    //배열 요소 출력
    for (j = 0; j < 6; j++)
    {
        printf("%d가 나온 횟수: %d\n", j + 1, dice[j]);
    }
    return 0;
}