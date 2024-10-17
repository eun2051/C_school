// 얼마 동안 출근하면 누적 출퇴근 거리가 달까지의 거리가 되는지 궁금해짐
// 지구에서 달까지의 거리는 383000km
#include <stdio.h>

int main(void){
    int working = 60;
    int moondistance = 383000;
    int day;

    day = moondistance / working;  //일수
    //day = (double)(moondistance / working + 0.05);  //반올림 하는 형태

    int year = day / 365;   //년수
    int month = (day % 365) / 30;   //월수
    int days = (day % 365) % 30;    //일수

    printf("%d년 %d월 %d일\n", year, month, days);
    
    return 0;
}