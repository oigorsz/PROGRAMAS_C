#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void printNspace(char str[100], int tamStr, int space){
    for(int i = 0; i < tamStr; i++){
        if(str[i] == ' '){
            space += 1;
        }
    }
    printf("SPACES: %d.\n", space);
}

void printNvogal(char str[100], int tamStr, int vogal){
    for(int i = 0; i < tamStr; i++){
        str[i] = toupper(str[i]);
        if( str[i] == 'A' ||
            str[i] == 'E' ||
            str[i] == 'I' ||
            str[i] == 'O' ||
            str[i] == 'U'){
                vogal += 1;
            }
    }
    printf("VOGAIS: %d.\n", vogal);
}

int main(void){
    char str[100];
    int tamStr, space = 0, vogal = 0;

    system("cls");

    printf("DIGITE UMA STRING QUALQUER: \n=> ");
    fgets(str, sizeof(str), stdin);

    tamStr = strlen(str);
    str[tamStr - 1] = '\0';

    system("cls");

    printf("STRING ORIGINAL: %s.\n", str);
    printf("TAMANHO DA STRING: %d.\n", tamStr);

    printNspace(str, tamStr, space);
    printNvogal(str, tamStr, space);

    return 0;
}
