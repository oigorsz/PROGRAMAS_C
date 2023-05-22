#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor1[10], vetor2[10], vetor3[10], vetor4[30];
    int i, j, k, l;

    system("cls");

    for(i = 0; i <= 9; i++){
        printf("DIGITE UM NÚMERO INTEIRO PARA O VETOR 1: \n => ");
        scanf("%i", &vetor1[i]);
        system("cls");
    }

    system("cls");

    for(i = 0; i <= 9; i++){
        printf("DIGITE UM NÚMERO INTEIRO PARA O VETOR 2: \n => ");
        scanf("%i", &vetor2[i]);
        system("cls");
    }

    system("cls");

    for(i = 0; i <= 9; i++){
        printf("DIGITE UM NÚMERO INTEIRO PARA O VETOR 3: \n => ");
        scanf("%i", &vetor3[i]);
        system("cls");
    }

    system("cls");

    printf("VETOR 1\n");

    for(i = 0; i <= 9; i++){
        printf("%i - %i.\n", i + 1, vetor1[i]);
    }

    printf("\nVETOR 2\n");

    for(i = 0; i <= 9; i++){
        printf("%i - %i.\n", i + 1, vetor2[i]);
    }

    printf("\nVETOR 3\n");

    for(i = 0; i <= 9; i++){
        printf("%i - %i.\n", i + 1, vetor3[i]);
    }

    i = 0, j = 0, k = 0, l = 0;

    while (i <= 9 && j <= 9 && k <= 9){
        vetor4[l++] = vetor1[i++];
        vetor4[l++] = vetor2[j++];
        vetor4[l++] = vetor3[k++];
    }

    printf("\nVETOR 4\n");

    for(i = 0; i <= 29; i++){
        printf("%i - %i.\n", i + 1, vetor4[i]);
    }

}