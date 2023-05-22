#include <stdio.h>
#include <stdlib.h>

int main(){
    double numeros[10];

    system("clear");

    for (int i = 0; i <= 9; i++){
        printf("DIGITE UM NÚMERO INTEIRO: \n => ");
        scanf("%lf", &numeros[i]);
        system("clear");
    }

    system("clear");

    printf("LISTA DOS NÚMEROS EM ORDEM INVERSA.\n");

    for (int i = 9; i >= 0 ; i--){
        printf("%i - %.2lf.\n", 10 - i, numeros[i]);
    }

}