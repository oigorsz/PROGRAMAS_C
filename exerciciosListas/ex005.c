#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5], vetorImpar[5], numImpar = 0, vetorPar[5], numPar = 0;

    system("cls");

    for(int i = 0; i < 5; i++){
        printf("DIGITE UM NÚMERO INTEIRO POSITIVO: \n => ");
        scanf("%i", &numeros[i]);

        if (numeros[i]%2 == 0){
            vetorPar[numPar] = numeros[i];
            numPar ++;
            continue;
        }

        vetorImpar[numImpar] = numeros[i];
        numImpar++;
    }

    system("cls");

    printf("OS NÚMEROS LIDOS FORAM:\n");
    for(int i = 0; i < 5; i++){
        printf("%i - %i.\n", i + 1, numeros[i]);
    }
    printf("OS NÚMEROS PARES:\n");
    for(int i = 0; i < numPar; i++){
        printf("%i - %i.\n", i + 1, vetorPar[i]);
    }
    printf("OS NÚMEROS IMPARES:\n");
    for(int i = 0; i < numImpar; i++){
        printf("%i - %i.\n", i + 1, vetorImpar[i]);
    }
}