#include <stdio.h>

int main(void){
    int x, y, pre, post;
    x=1;
    y=1;
    pre = ++x;  //pre는 2가 된다, x값도 증가가 된다

    post = y++;  // y값은 증가가 되었는데 post값은 증가가 되기 전의 값이다
    // y++;   -> y = y+1;
    printf("pre = %d, post = %d\n", pre, post);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}