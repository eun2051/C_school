#include <stdio.h>
#include <string.h>

int main (void) {
    char inputtext[30] = "$$#!computer!@$%";
    char outputtext[30] = "";
    int i = 0;
    
    for(int j = 0; j<strlen(inputtext); j++){
        if(inputtext[j]>= 97 && inputtext[j] <= 122){
            outputtext[i] = inputtext[j];
            i++;
        }
    }
    outputtext[i] = '\0';
    printf("%s\n", inputtext);
    printf("%s\n", outputtext);
    return 0;
}