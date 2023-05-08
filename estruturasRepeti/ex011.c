#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    int num1, num2, maior, menor, dif, soma;

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%d", &num1);

    printf("DIGITE OUTRO NÚMERO: \n => ");
    scanf("%d", &num2);

    if (num1 == num2){
        printf("NÃO HÁ INTERVALO, POIS OS NÚMEROS SÃO IGUAIS.\n");
        return 0;
    }

    maior = num1;
    menor = num2;

    if (num2 > num1){
        maior = num2;
        menor = num1;
    }

    dif = maior - menor;
    soma = 0;

    system("cls");

    for (int i = 1; i < dif; i++){
        menor += 1;
        soma += menor;
    }

    printf("SOMA DO INTERVALO: %d.\n", soma);

}