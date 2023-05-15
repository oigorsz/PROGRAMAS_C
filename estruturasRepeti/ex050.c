#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    double soma = 0.0;

    system("cls");

    printf("DIGITE UM NÚMERO INTEIRO: \n => ");
    scanf("%d", &number);

    if (number <= 0){
        printf("O VALOR DE N DEVE SER POSITIVO.\n");
        return 0;
    }

    
    for(int i = 1; i <= number; i++){
        soma += 1.0/i;
    }

    printf("O VALOR DE H PARA N IGUAL %d É: %lf.\n", number, soma);

    return 0;
}