#include <stdio.h>
#include <string.h>
#define ENTRIES 3

int main(void){
    int i, index;
    char dic[ENTRIES][2][30] = {  // 30 = 하나의 글자의 크기(열)
        {"book", "책"},
        {"computer", "컴퓨터"},
        {"boy", "소년"},
    };
    char word[30];
    printf("단어를 입력하시오: ");
    scanf("%s", word);

    index = 0;
    for(i = 0; i < ENTRIES; i++){
        if (strcmp dic[index][0], word == 0){
            index = i;
            break;
        }
        index++;
    }
    printf("사전에서 찾을 수 없습니다.\n");
}