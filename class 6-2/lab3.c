//사용자가 입력한 현재의 온도를 검사하여서 영상인지 영하인지 출력하는 프로그램을 작성하자
#include <stdio.h>

int main(void){
    int temp;
    printf("현재 온도를 입력하세요: ");
    scanf("%d", &temp);

    if(temp >= 0){
        printf("영상입니다.\n");
    }else{
        printf("영하입니다.\n");
    }

    return 0;
}