#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tile[10][10] = {0};
    int count = 0;
    int i, j;
    for(int x = 0; x < 2; x++){
        printf("%d번째 사각형의 좌표를 입력하세요: ", x + 1);
        scanf("%d %d", &i, &j);
        for(int a = i; a<i+3;a++){
            for(int b=j; b<j+3; b++){
                tile[a][b] = 1;
            }
        }
    }
    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            if (tile[a][b] == 1) {
                count++;
            }
        }
    }
    printf("타일의 개수: %d\n", count);
    return 0;
}