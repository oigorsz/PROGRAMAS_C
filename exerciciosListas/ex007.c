#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5], soma = 0, multi = 1; 

    system("cls");

    for(int i = 0; i <= 4; i++){
        printf("DIGITE UM NÚMERO INTEIRO: \n => ");
        scanf("%i", &numeros[i]);
        soma += numeros[i];
        multi *= numeros[i];

        system("cls");
    }

    system("cls");

    printf("NÚMEROS ESCOLHIDOS:\n");

    for(int i = 0; i <= 4; i++){
        printf("%i - %i.\n", i + 1, numeros[i]);
    }

    printf("SOMA: %i.\n", soma);
    printf("PRODUTO: %i.\n", multi);
}