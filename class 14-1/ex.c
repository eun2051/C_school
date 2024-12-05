#include <stdio.h>

int main (void){
    char s[] = "Hello, World!";
    char *p = "Hello, World!";

    s[0] = 'h';
    //p[0] = 'h'; //error

    printf("포인터가 가리키는 문자열 = %s\n", p);
    p = "Goodbye";  // 포인터가 가리키는 문자열 변환
    // 문자열을 바꾸는것이 아닌 주소를 바꾸는 것
    printf("포인터가 가리키는 문자열 = %s\n", p);
    return 0;
}