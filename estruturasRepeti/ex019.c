#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1, num2, num3, maior, menor, soma;

    system("cls");

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num1);

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num2);

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num3);

    system("cls");

    soma = num1 +  num2 + num3;

    maior = num1;

    if (num1 == num2 && num1 == num3 && num2 == num3){
        printf("TODOS OS NÚMEROS SÃO IGUAIS\n");
        printf("SOMA: %.2lf.\n", soma);
        return 0;
    }

    if (num2 > num1){
        maior = num2;

        if (num3 > num2){
            maior = num3;
            menor = num1;
        }
    }

    if (num3 > num1){
        maior = num3;

        if(num2 > num3){
            maior = num2;
            menor = num1;
        }
    }

    printf("SOMA: %.2lf.\nMAIOR: %.2lf.\nMENOR: %.2lf.\n", soma, maior, menor);
}