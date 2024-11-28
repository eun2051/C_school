#include <stdio.h>
#include <conio.h>

int main(void) {
	int ch;
	while((ch = _getch()) != 'q')
	//버퍼,에코 사용 x,		
		_putch(ch);
	
	return 0;
}