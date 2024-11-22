#include <stdio.h>
#include <stdlib.h>

void display_car(int car_number, int distance);

int main(void){
    int i;
    int car1 = 0, car2 = 0;
    srand(time(NULL));

    for(i=0; i<10; i++){
        car1 += rand() % 10;
        car2 += rand() % 10;
        display_car(1, car1);
        display_car(2, car2);
        printf("\n");
    }
    return 0;
}

void display_car(int car_number, int distance){
    int i;
    printf("Car #%d: ", car_number);
    for(i=0; i<distance; i++){
        printf("*");
    }
    printf("\n");
}