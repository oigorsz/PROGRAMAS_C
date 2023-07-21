#include <stdio.h>
#include <stdlib.h>


int main(void){
    int vetor[5];
    int num;
    int encontrado = 0;

    system("cls");

    for(int i = 0; i < 5; i++){
        printf("DIGITE O VALOR %d:\n => ", i + 1);
        scanf("%d", &vetor[i]);
        
    }

    system("cls"); 

    printf("DIGITE UM NUMERO INTEIRO:\n => ");
    scanf("%d", &num);

    for(int i = 0; i < 5; i++){
        if(num == vetor[i]){
            printf("%d foi encontrado na posicao %d do vetor.\n", num, i);
            encontrado = 1;
        }
    }

    if(encontrado == 0){
        printf("%d nao foi encontrado no vetor.\n", num);
    }

    return 0;
}