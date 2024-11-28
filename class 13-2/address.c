#include <stdio.h>

int main(void){
    char name[100];
    char address[100];

    printf("이름을 입력하시오: ");
    scanf("%s", name);
    printf("현재 거주하는 주소를 입력하시오: ");
    scanf("%s", address);

    printf("안녕하세요, %s에 사는 %s씨\n", address, name);
    //address에서 전체가 출력되지 못함
    return 0;
}