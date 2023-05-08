#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3, menor, maior;

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num1);

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num2);

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num3);

    system("cls");

    if (num1 == num2 && num1 == num3 && num2 == num3) {
        printf("TODOS SÃO IGUAIS.\n");
        return 0;
    }

    maior = num1;

    if (num2 > num1) {
        maior = num2;
    }
    if (num3 > maior){
        maior = num3;
    }

    menor = num1;

    if (num2 < num1){
        menor = num2;
    }
    if(num3 < menor){
        menor = num3;
    }

    printf("O MAIOR : %.2lf.\n", maior);
    printf("O MENOR: %.2lf.\n", menor);

    return 0;
}
