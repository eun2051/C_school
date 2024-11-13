#include <stdio.h>

int main (void)
{
    int arr[3][5] = {{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4}};

    int i, j;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
            printf("arr[%d][%d]=%d ", i, j, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
// 탐색할때 특정 값 찾기
int main (void)
{
    int arr[3][5] = {{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4}};

    int i, j;
    int key = 3;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
        if(arr[i][j] == key)
            printf("arr[%d][%d]=%d ", i, j, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/