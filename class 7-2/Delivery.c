//A지역에서는 5만원이상이면 배송비 없다. 그렇지 않으면 5천원 부과
//B지역에서는 3만원이상이면 배송비 없다. 그렇지 않으면 3천원 부과
#include <stdio.h>

int main(void){
    int price;
    char area;
    printf("제품의 가격을 입력하시오:");
    scanf("%d", &price);
    printf("배송지역을 입력하시오:");
    scanf(" %c", &area);
    if (area == 'A'){
        if (price >= 50000){
            printf("배송비는 없습니다.\n");
        }
        else{
            printf("배송비는 5000원입니다.\n");
        }
    }
    if (area == 'B'){
        if (price >= 30000){
            printf("배송비는 없습니다.\n");
        }
        else{
            printf("배송비는 3000원입니다.\n");
        }
    }
}


int teacher(void){
    int price;
    char location;
    printf("제품의 가격을 입력하시오:");
    scanf("%d", &price);
    printf("배송지역을 입력하시오:");
    scanf(" %c", &location);

    if(location == 'A'){
        if(price >= 50000)  printf("비용은 %d원입니다.\n", price);
        else printf("배송비는 %d원입니다.\n", price + 5000);
    }else if(location == 'B'){
        if(price >= 30000)  printf("비용은 %d원입니다.\n", price);
        else printf("배송비는 %d원입니다.\n", price + 3000);
    }else printf("잘못된 배송지역입니다.\n");
    return 0;
}