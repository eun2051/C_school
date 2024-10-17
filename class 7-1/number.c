// 사용자가 입력한 정수가 0에서 100 사이인지를 검사하는 프로그램을 작성하여 보자
#include <stdio.h> 

int main(void){
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    if(num >= 0 && num <= 100){
        printf("입력한 정수는 0에서 100 사이에 있습니다.\n");
    }else{
        printf("입력한 정수는 0에서 100 사이에 없습니다.\n");
    }
    return 0;
}