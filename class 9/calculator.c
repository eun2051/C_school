//간단한 산술 계산기 만들기
//2개의 피연산자를 받아서 +, -, *, / 연산을 수행하는 프로그램을 제작하자
#include <stdio.h>

int main(void){
    int x, y;
    char z;
    printf("수식을 입력하시오: ");
    scanf("%d %c %d", &x, &z, &y);
    if (z == "+"){
        printf("%d %c %d = %d\n", x, z, y, x + y);
    }else{
        if (z == "-"){
            printf("%d %c %d = %d\n", x, z, y, x - y);
        }else{
            if (z == "*"){
                printf("%d %c %d = %d\n", x, z, y, x * y); 
            }else{
                if (z == "/"){
                    printf("%d %c %d = %d\n", x, z, y, x / y);
                }
            }
        }
    }
    return 0;
}