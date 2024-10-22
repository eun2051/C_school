//A4종이를 접어서 에베레스트산 높이(8800m)가 되려면 종이를 몇번 접어야
//하는지를 계산해보자. 종이의 두께는 1mm이다.
//종이는 접을때마다 두께가 2배가 된다.
#include <stdio.h>

int main(void)
{
    int height = 8800000;
    int thick = 1;
    int count = 0;

    while ( thick < height)
    {
        thick *= 2;
        count++;
    }
    printf("접어야하는 종이의 횟수는 %d번 입니다.\n", count);
    return 0;
}


int teacher(void)
{
    int count = 0;
    int height = 1;
    int mountain = 8800000;
    while (height < mountain)
    {
        printf("height is %d\n", height);
        height = height*2;
        count++;
    }
    printf("Count is %d\n", count);
    return 0;
}