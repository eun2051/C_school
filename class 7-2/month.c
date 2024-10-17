//1년의 각 달의 일수를 출력하는 프로그램
//달이 주어지면 그 달의 일수를 출력
#include <stdio.h>

int main(void){
    int day, month;
    printf("일수를 알고 싶은 달을 입력하시오:");
    scanf("%d", &month);
    switch (month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            day = 31;
            break;
        case 4: case 6: case 9: case 11:
            day = 30;
            break;
        case 2:
            day = 28;
            break;
        default:
            day = 0;
            break;  
    }
    printf("%d월의 일수는 %d일까지 있습니다.\n", month, day);
}


int solution(void){
    int day, month;
    printf("일수를 알고 싶은 달을 입력하시오:");
    scanf("%d", &month);
    switch (month) {
        case 4: case 6: case 9: case 11:
            day = 30;
            break;
        case 2:
            day = 28;
            break;
        default:
            day = 31;
            break;
        }
    printf("%d월의 일수는 %d일까지 있습니다.\n", month, day);   
}
