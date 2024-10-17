//제한 속도 20km/h 초과 4만원 과태료
//제한 속도 21-40km/h 이하 초과 7만원 과태료
//제한 속도 41-60km/h 초과 10만원 과태료
//제한 속도 60km/h 초과 13만원 과태료
#include <stdio.h>

int main(void){
    int speed;
    printf("현재 속도를 입력하시오:");
    scanf("%d", &speed);
    if (speed <= 20){
        printf("과태료는 없습니다.\n");
    }
    else if (speed <= 40){
        printf("과태료는 4만원입니다.\n");
    }
    else if (speed <= 60){
        printf("과태료는 7만원입니다.\n");
    }
    else if (speed <= 80){
        printf("과태료는 10만원입니다.\n");
    }
    else{
        printf("과태료는 13만원입니다.\n");
    }
}

int teacher(void){
    int speed;
    int limit = 60;
    printf("현재 속도를 입력하시오:");
    scanf("%d", &speed);

    if(speed > limit+60) printf("과태료는 13만원입니다.\n");
    else if(speed >= limit+41) printf("과태료는 10만원입니다.\n");
    else if(speed >= limit+21) printf("과태료는 7만원입니다.\n");
    else if(speed >= limit+20) printf("과태료는 4만원입니다.\n");
    else printf("과태료는 없습니다.\n");
    
    return 0;
}