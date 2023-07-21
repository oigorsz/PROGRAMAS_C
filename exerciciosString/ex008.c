#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int isPalindromo(char str[]){
    int len = strlen(str);
    int i, j;

    char cleanedStr[len + 1];
    int index = 0;
    for (i = 0; i < len; i++) {
        if (isalnum(str[i])) {
            cleanedStr[index++] = tolower(str[i]);
        }
    }

    cleanedStr[index] = '\0';

    len = strlen(cleanedStr);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (cleanedStr[i] != cleanedStr[j]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str[100];

    system("cls");

    printf("DIGITE UMA STRING QUALQUER: \n=> ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("STRING DIGITADA: %s\n", str);

    if (isPalindromo(str)) {
        printf("É PALINDROMO.\n");
    } else {
        printf("NAO É PALINDROMO.\n");
    }
    
}





