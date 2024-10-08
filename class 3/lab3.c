// 월급을 받은 후에 각 지출 항목을 입력해보고, 한 달에 얼마나 저축할 수 있는지를 계산하는 프로그램을 작성해보자
#include <stdio.h>

int lab3(void){
    int income, outcome, save;
    int days, traffic, food, other;

    printf("월급을 입력하시오 : ");
    scanf("%d", &income);
    printf("한 달에 며칠이나 출근하나요(일) : ");
    scanf("%d", &days);
    printf("하루 교통비를 입력하시오 : ");
    scanf("%d", &traffic);
    printf("하루 식비를 입력하시오 : ");
    scanf("%d", &food);
    printf("하루 용돈을 입력하시오 : ");
    scanf("%d", &other);

    int _tmp = traffic + food + other;
    printf("하루 지출금액 : %d", _tmp);
    outcome = _tmp * days;
    printf("월 지출금액 : %d", outcome);
    save = income - outcome;
    printf("저축액 : %d", save);
    return 0;
}