#include <stdio.h>
#include <stdlib.h>

void static_check(void);
int main(void){
    static_check();
    static_check();
    static_check();
    static_check();
    static_check();
    return 0;
}

void static_check(void){
    int auto_count = 0;
    static int static_count = 0;
    auto_count++;
    static_count++;
    printf("auto_count = %d\n", auto_count);
    printf("static_count = %d\n", static_count);
}