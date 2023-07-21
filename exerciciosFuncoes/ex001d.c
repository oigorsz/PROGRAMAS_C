#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

char formatString(char string[TAM]){
    string[strlen(string) - 1] = '\0';

    for(int i = 0; i < strlen(string); i++){
        if(string[i] == ' '){
            string[i] = '-';
        }
    }
}


int main(void){
    char string[TAM];

    system("cls");

    printf("DIGITE UMA STRING: \n => ");
    fgets(string, TAM, stdin);
    formatString(string);

    system("cls");

    printf("%s", string);

    return 0;
}