#include <stdio.h>

int main(void){
    int x = 15;  // 1111
    int y = 5;   // 0101

    printf("%08X & %08X = %08X\n", x, y, x & y);  // 0101
    printf("%08X | %08X = %08X\n", x, y, x | y);  // 1111
    printf("%08X ^ %08X = %08X\n", x, y, x ^ y);  // 1010
    printf("~%08X = %08X\n", x, ~x);
    
    return 0;
}