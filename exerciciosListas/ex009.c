#include <stdio.h>
#include <stdlib.h>


int main(){
    int numeros[10], soma = 0;

    for(int i = 0; i <= 9; i++){
        printf("DIGITE UM NÚMERO INTEIRO: \n => ");
        scanf("%i", &numeros[i]);
        soma += numeros[i]*numeros[i];

        system("cls");
    }

    system("cls");

    printf("A SOMA DOS QUADRADOS DOS NÚMEROS ESCOLHIDOS É: \n=> ");
    printf("%i.\n", soma);
}