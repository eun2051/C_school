// 동전 던지기 게임
// 프로그램을 실행할 때마다 동전을 던지는 것처럼 앞면과 뒷면이 랜덤하게 나와야한다
#include <stdio.h>
#include <stdlib.h>  //헤더파일 추가

int main(void){
    printf("동전 던지기 게임을 시작합니다.\n");
    srand(time(NULL));  //난수 생성기 초기화
    int coin = rand() % 2;  //0 또는 1을 반환

    if(coin == 1){
        printf("앞면입니다.\n");
    }else{
        printf("뒷면입니다.\n");
    }
    return 0;
}

//rand() =>  난수 발생 / srand() => 난수 발생기 초기화