#include <stdio.h>
#include <string.h>

int main(void) {
    int count = 0;

    char stra[] = "Hello World We are the world!@";
    while(stra[count] != '\0') {
        count++;
    }
    printf("문자열 길이는 %d입니다.\n", count);
    printf("문자열 길이는 %d입니다.\n", strlen(stra));
    return 0;
}
// 문자열을 그대로 받는 방법?