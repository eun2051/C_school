#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int reserve[10] = {0};
    char answer;

    while(1){
        printf("좌석을 예약하시겠습니까? (y/n): ");
        scanf(" %c", &answer);
        if (answer == 'y') {
            printf(" -----------------\n");
            for (int i = 0; i < 10; i++) {
                printf("%d ", i + 1);
            }
            printf("\n -----------------\n");
            for (int i = 0; i < 10; i++) {
                printf("%d ", reserve[i]);
            }
            int sit;
            printf("\n 몇 번째 좌석을 예약하시겠습니까? ");
            scanf("%d", &sit);
            if (reserve[sit -1] == 0) {
                reserve[sit -1] =1;
                printf("\n%d번 좌석이 예약되었습니다.\n", sit);
            } else {
                printf("\n%d번 좌석은 이미 예약된 좌석입니다.\n 다른 좌석을 선택해주세요.\n", sit);
                break;
            }
            
         }else if (answer == 'n') {
            printf("종료합니다.\n");
            break;
        }
    }
}