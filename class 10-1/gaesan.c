#include <stdio.h>

int main(void)
{
    int score[]=(10,20,30,40,50);
    int i, size;
    printf("size of 1 1 $d\n", sizeof(score));
    printf("size of 2 1 $d\n", sizeof(score[0]));
}