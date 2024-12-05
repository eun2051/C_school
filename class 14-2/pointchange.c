#include <stdio.h>

int main(void){
	int data = 0x0A0B0C0D;
	// 0A/0B/0C/0D - 로 나뉘어짐
	char *pc;
	int i;
	
	pc = (char*)&data;
	for(i = 0; i < 4; i++)
		printf("*(pc+%d) = %02X\n", i, *(pc+i));
        //역순으로 출력됨
	return 0;
}