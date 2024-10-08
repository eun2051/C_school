/*나머지 연산자를 활용하여
타일의 크기 30*30, 거실의 크기는 320*200
타일은 부족하면 안되고 몇개의 타일을 주문해야하는가?*/
// 320/30 => 몫, 나머지 +1
#include <stdio.h>

int main(void){
    int resultx, resulty;

    int roomx = 320;
    int roomy = 200;
    int tile = 30;

    resultx = roomx / tile;
    printf("%d\n", resultx);
    int _resultx = roomx % tile; //나머지 계산
    if (_resultx > 0){
        resultx++; // 타일이 부족하면 안됨, 가로의 타일수 : resultx
    }
    printf("%d\n", resultx);

    resulty = roomy / tile;
    printf("%d\n", resulty);
    int _resulty = roomy % tile; //나머지 계산
    if (_resulty > 0){
        resulty++; // 타일이 부족하면 안됨, 세로의 타일수 : resulty
    }
    printf("%d\n", resulty);

    printf("거실 가로 %d, 세로 %d, 필요한 타일갯수는 %d입니다.\n", resultx, resulty, resultx*resulty);
    return 0;
}