#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void) 
{
    char password[100] = "";
    int lower_cnt = 0;
    int upper_cnt = 0;
    int digit_cnt = 0;
    int len, i;
    
    printf("비밀번호를 입력하시오: ");
    for(i = 0; i < 12; i++) {
        scanf("%c", &password[i]);
        //for문 대신 scanf("%s", password);
        //라고 받을 수도 있음
    }
    len = strlen(password);
    for(i = 0;i < len; i++){
        if(islower(password[i])) lower_cnt++;
        if(isupper(password[i])) upper_cnt++;
        if(isdigit(password[i])) digit_cnt++;
    }
    if(len >= 7 && lower_cnt >= 1 && upper_cnt >= 1 && digit_cnt >= 1){
        printf("%s는 적절한 비밀번호입니다\n", password);
    }else{ 
        printf("비밀번호를 다시 입력해주세요.\n", password);
    }
    return 0;
}