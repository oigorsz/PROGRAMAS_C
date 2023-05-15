#include <stdio.h>
#include <stdlib.h>

int main(){
    int centena, dezena, unidade, number;

    system("cls");

    printf("DIGITE UM NÚMERO INTEIRO MENOR QUE 1000: \n => ");
    scanf("%i", &number);

    while(number < 0 ||number > 1000){
        printf("DIGITE UM VALOR VÁLIDO.\n");
        printf("DIGITE UM NÚMERO INTEIRO MENOR QUE 1000: \n => ");
        scanf("%i", &number);
        system("cls");
    }

    centena = number/100;
    dezena = (number%100)/10;
    unidade = (number%100) %10;

    printf("%d CENTENAS e %d DEZENAS e %d UNIDADES.\n", centena, dezena, unidade);
}