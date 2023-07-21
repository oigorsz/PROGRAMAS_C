#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isPalindromo(char string[100], int originalLen){
    int index = 0; //novo indice
    int i, j, newLen; 
    char cleanedString [originalLen + 1];

    for(i = 0; i < originalLen; i++){
        string[i] = toupper(string[i]);
        if (string[i] != ' '){
            cleanedString[index++] = string[i];
        }
    }

    cleanedString[index] = '\0';

    newLen = strlen(cleanedString);

    for(i = 0, j = newLen - 1; i < j; i++, j--){
        if(cleanedString[i] != cleanedString[j]){
            return 0;
        }
    }

    return 1;
}

int main(void){
    char string[100];
    int originalLen;

    system("cls");

    printf("DIGITE UMA STRING QUALQUER:\n => ");
    fgets(string, sizeof(string), stdin);
    originalLen = strlen(string);
    string[originalLen - 1] = '\0';

    system("cls");

    printf("STRING DIGITADA: %s.\n", string);

    if(isPalindromo(string, originalLen)){
        printf("É PALINDROMO.\n");
    } else {
        printf("NAO É PALINDROMO.\n");
    }
    
}