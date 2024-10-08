#include <stdio.h>

int main(void){
    char name; 
    int student_num, g1, g2, g3, g4;
    double avg;

    printf("이름 :");
    scanf("%c", &name);
    printf("학번 :");
    scanf("%d", &student_num);
    printf("성적 :");
    scanf("%d %d %d %d", &g1, &g2, &g3, &g4);
    avg = (g1 + g2 + g3 + g4) / 4;
    printf("학생 %c(학번: %d)의 평균 성적은 %.2f입니다.", name, student_num, avg);
    
    return 0;
}