#include <stdio.h>
#include <stdlib.h>

void somar(int number1, int number2, int number3){
    int soma = 0;

    soma = number1 + number2 + number3;

    printf("SOMA = %d.\n", soma);
}


int main(void){
    int number1, number2, number3;

    system("cls");

    printf("DIGITE O NUMERO 1: \n => ");
    scanf("%d", &number1);
    printf("DIGITE O NUMERO 2: \n => ");
    scanf("%d", &number2);
    printf("DIGITE O NUMERO 3: \n => ");
    scanf("%d", &number3);

    system("cls");

    somar(number1, number2, number3);

    return 0;
}