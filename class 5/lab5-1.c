#include <stdio.h>
#define KWH_TO_MS (1000/3600.0)   // km/h 를 m/s 로 변환하기 위한 상수, 매크로
//1km => 1000m
// 60분 * 60초 => 3600초(1시간)

int main(void){
    double distance = 18.4; //단위 : m
    double speed = 160 * KWH_TO_MS; //km/h를 m/s로 변환하여 속도 계산
    double time = distance / speed;

    printf("강속구가 홈플레이트에 도달하는 데 걸리는 시간 : %f초\n", time);
    return 0;
}