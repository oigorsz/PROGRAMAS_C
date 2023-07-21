#include <stdio.h>
#include <stdlib.h>


int main(void){
    int vetor1[10];
    int vetorPar[10], npar = 0;
    int vetorImpar[10], nimpar = 0;

    system("cls");

    for(int i = 0; i < 10; i++){
        printf("DIGITE UM NUMERO INTEIRO(%d/10):\n => ", i + 1);
        scanf("%d", &vetor1[i]);

        if(vetor1[i]%2 == 0){
            vetorPar[npar] = vetor1[i];
            npar += 1;
        } else {
            vetorImpar[nimpar] = vetor1[i];
            nimpar += 1;
        }
    }

    system("cls");

    printf("\nVETOR 1.\n");

    for(int i = 0; i < 10; i++){
        printf("%d \n", vetor1[i]);
    }

    printf("\nVETOR PARES.\n");

    for(int i = 0; i < npar; i++){
        printf("%d \n", vetorPar[i]);
    }

    printf("\nVETOR IMPARES.\n");

    for(int i = 0; i < nimpar; i++){
        printf("%d \n", vetorImpar[i]);
    }


    return 0;
}