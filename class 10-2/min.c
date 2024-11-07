//최솟값 구하는 알고리즘 구하기
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int price[10] = {0};
    int min = 0;
    char answer;

    while(1)
    {
        printf("최솟값을 구하시겠습니까? (y/n): ");
        scanf(" %c", &answer);
        if (answer == 'y')
        {
            printf("------------------\n");
            for (int i = 0; i < 10; i++)
            {
                printf("%d ", i + 1);
            }
        }
    }
}
