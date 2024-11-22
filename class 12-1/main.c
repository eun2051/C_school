#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

void modify_array(int a[], int size);
void print_array(int a[], int size);

int main(void){
    int list[SIZE] = {1, 2, 3, 4, 5};

    print_array(list, SIZE);
    modify_array(list, SIZE);
    print_array(list, SIZE);
    return 0;
}

void print_array(int a[], int size){
    for(int i = 0; i < size; i++){
        printf("%3d ", a[i]);
    }
    printf("\n");
}
void modify_array(int a[], int size){
    for(int i = 0; i < size; i++){
        ++a[i];
    }
}