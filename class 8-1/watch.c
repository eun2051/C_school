//디지털 시계 만들어보기
// 1초가 지나갔다는 것을 우리에게 알려주는 함수만 있으면된다.
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int hour, min, sec;
    hour = min = sec = 0 ;

    while (1) 
    {
        printf("%02d:%02d:%02d\n", hour, min, sec);
        sec++;
        if(sec == 60)
        {
            min++;
            sec = 0;
        }
        if ( min == 60)
        {
            hour ++;
            min = 0;
        }
        Sleep(1000);
    }
}
