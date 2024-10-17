/* 자동판매기를 시뮬레이션 하는 프로그램 만들기
사용자로부터 투입한 돈과 물건값을 입력받는다, 잔돈을 계산하며 출력한다.
자판기는 동전 100원, 10원, 1원짜리를 가지고 있다고 가정하자.*/
#include <stdio.h>

int main(void){
    int money, price, change, result;
    int coin100, coin10, coin1;

    printf("투입한 돈을 입력하시오: ");
    scanf("%d", &money);
    printf("물건값을 입력하시오: ");
    scanf("%d", &price);

    change = money - price;

    coin100 = change / 100;
    result = change % 100;

    coin10 = change / 10;
    result = result % 10;
    
    change = change % 10;
    coin1 = change;

    printf("거스름돈은 100원 %d개, 10원 %d개, 1원 %d개 입니다.\n", coin100, coin10, coin1);
    return 0;
}