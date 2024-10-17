//구구단을 goto문으로 출력해보자
#include <stdio.h>

int main(void){
    int i = 1;
loop:  //지정 특정 라벨
    printf("%d * %d = %d\n", 3, i, 3 * i);
    i++;
    
    if(i==10) goto end; //핵심
    goto loop;
end:
    return 0;
}