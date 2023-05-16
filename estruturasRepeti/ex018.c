#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, maior, menor, soma;

    system("cls");
    
    printf("DIGITE UM NÚMERO INTEIRO POSITIVO: \n => ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    system("cls");

    while (num >= 0){
        printf("PARA ENCERRAR DIGITE -1.\n");
        printf("DIGITE OUTRO NÚMERO INTEIRO POSITIVO: \n => ");
        scanf("%d", &num);

        if (num == -1){
            continue;
        }

        if (num >= maior){
            maior = num;
        }

        if (num <= menor){
            menor = num;
        }

        soma = maior + menor;

        system("cls");
    }

    system("cls");

    printf("MAIOR: %d.\n", maior);
    printf("MENOR: %d.\n", menor);
    printf("SOMA DO MAIOR COM O MENOR: %d.\n", soma);
}