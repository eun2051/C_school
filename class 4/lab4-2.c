#include <stdio.h>

int main(void){
    int input_value;

    printf("정수형 int의 크기는 %zu 입니다.\n", sizeof(int));
    printf("정수형 long의 크기는 %zu 입니다.\n", sizeof(long));
    printf("정수형 long long의 크기는 %zu 입니다.\n", sizeof(long long));

    printf("정수를 입력하시오(10진수):");
    scanf("%d", &input_value);
    printf("%d는 10진수로 %d, 8진수로 %#om 16진수로 %#x 입니다.\n", input_value, input_value, input_value, input_value);

    printf("정수를 입력하시오(16진수):");
    scanf("%x", &input_value);
    printf("%d는 10진수로 %d, 8진수로 %#om 16진수로 %#x 입니다.\n", input_value, input_value, input_value, input_value);

    return 0;
}