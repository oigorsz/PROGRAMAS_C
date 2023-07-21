#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *converter(char string[]){
    int tamanho = strlen(string);
    string[tamanho - 1] = '\0';

    for(int i = 0; i < tamanho; i++){
        if(string[i] == ' '){
            string[i] = '-';
        }
    }

    return string;
}


int main(void){
    char string[100];

    system("cls");

    printf("DIGITE UMA STING:\n => ");
    fgets(string, sizeof(string), stdin);

    system("cls");

    printf("%s", converter(string));


    return 0;
}