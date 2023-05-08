#include <stdio.h>
#include <stdlib.h>

int main()
{
    double lado1, lado2, lado3;

    printf("VERIFICADOR DE TRIÂNGULOS.\n");

    printf("DIGITE O VALOR DE UM LADO DO TRIÂNGULO: \n => ");
    scanf("%lf", &lado1);

    printf("DIGITE O VALOR DE UM LADO DO TRIÂNGULO: \n => ");
    scanf("%lf", &lado2);

    printf("DIGITE O VALOR DE UM LADO DO TRIÂNGULO: \n => ");
    scanf("%lf", &lado3);

    system("cls");

    int ehtriangulo = (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2);

    if (!(ehtriangulo)){
        printf("NÃO PODE SER UM TRIÂNGULO.\n");
        return 0;
    }

    if (ehtriangulo){
        if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
            printf("TRIÂNGULO EQUILÁTERO.\n");
            return 0;
        }

        if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            printf("TRIÂNGULO ISÓCELES.\n");
            return 0;
        }

        printf("TRIÂNGULO ESCALENO.\n");
    }

    return 0;
}
