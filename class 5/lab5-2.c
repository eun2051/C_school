#include <stdio.h>

int main(void){
	char c; //변수 선언
	
	printf("문자를 입력하시오: ");
	c = getchar();
	printf("%c의 아스키코드 = %d\n", c, c);
	return 0;
}