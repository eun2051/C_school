//학생들의 성적을 받아서 학점을 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main(void){
    int score;
    printf("성적을 입력하시오:");
    scanf("%d", &score);
    if(score >= 90)
        printf("학점 A\n");
    else if(score >= 80)
        printf("학점 B\n");
    else if(score >= 70)
        printf("학점 C\n");
    else if(score >= 60)
        printf("학점 D\n");
    else printf("학점 F\n");
    return 0;
}

int second(void){
    int score;
    printf("성적을 입력하시오:");
    scanf("%d", &score);
    if(score >= 90){
        printf("학점 A\n");
    }else{
        if(score >= 80){
            printf("학점 B\n");
        }else{
            if(score >= 70){
                printf("학점 C\n");
            }else{
                if(score >= 60){
                    printf("학점 D\n");
                }else{
                    printf("학점 F\n");
                }
            }
        }
    }
    return 0;
}