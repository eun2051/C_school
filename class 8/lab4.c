//사용자로부터 입력받은 정수가 홀수인지 짝수인지 말해주는 프로그램 작성
#include <stdio.h>

int main(void){
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("짝수입니다.\n");
    }else{
        printf("홀수입니다.\n");
    }
    
    return 0;
}