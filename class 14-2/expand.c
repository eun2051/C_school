#include <stdio.h>

int main (void) {
	int i = 10;
	int *pi = &i;
	
	printf("i = %d, pi = %p\n", i, pi);
	
	(*pi)++; //p의 메모리가 바뀌는 것이 아닌 p의 값 변화
	printf("i = %d, pi = %p\n", i, pi);
	
	*pi++; //포인터 주소의 위치를 변화시킴, p의 값은 그대로
	printf("i = %d, pi = %p\n", i, pi);
	
	return 0;
}