#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor1[10], vetor2[10], vetor3[20];
    int i, j, k;

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

    i = 0, j = 0, k = 0;

    while (i <= 9 && j <= 9){
        vetor3[k++] = vetor1[i++];
        vetor3[k++] = vetor2[j++];
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

    printf("VETOR 3 (INTERCALADO)\n");

    for(int i = 0; i <= 19; i++){
        printf("%i - %i.\n", i + 1, vetor3[i]);
    }

}