//선생님으로부터 학생들의 성적을 받아서 배열에 저장하고
//평균을 계산하여 출력해보자
#include <stdio.h>

int main(void)
{
    int student = 5;
    int sum, average, i;
    int score[student];
    for(i = 0; i < student; i ++)
    {
        printf("학생 %d의 성적을 입력하세요: ",i+1);
        scanf("%d", &score[i]);
    }
    sum = 0;
    for(i = 0; i < student; i ++)
    {
        sum += score[i];
    }
    average = sum / student;
    printf("학생들의 평균 성적은 %d입니다.\n", average);
    return 0;
}