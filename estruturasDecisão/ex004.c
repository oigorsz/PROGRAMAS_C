#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;

    printf("DIGITE UMA LETRA: \n => ");
    scanf("%s", &caracter);

    system("cls");

    int ehletra = (65 <= caracter && caracter <= 90 || 97 <= caracter && caracter <= 123);
    int ehvogal = (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' 
    || caracter == 'u' || caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' 
    || caracter == 'U');


    if (!(ehletra)) {
        printf("O CARACTER NÃO É LETRA.\n");
        return 0;
    }

    if (ehvogal) {
        printf("O CARACTER É VOGAL.\n");
        return 0;
    }

    printf("O CARACTER É CONSOSANTE.\n");

}
