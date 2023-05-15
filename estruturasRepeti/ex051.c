#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    double soma = 1.0;

    system("cls");

    printf("DIGITE UM NÚMERO INTEIRO: \n => ");
    scanf("%d", &number);

    if (number <= 0){
        printf("O VALOR DE N DEVE SER POSITIVO.\n");
        return 0;
    }

    if (number == 1){
        printf("H = 1/1");
        printf("SOMA: 1 QUANDO N = 1.\n");
        return 0;
    }

    printf("H = 1/1");
    
    for(int i = 2; i <= number; i++){
        soma += 1.0/i;
        printf(" + 1/%i", i);
    }

    printf(".\n");

    printf("SOMA: %lf QUANDO N = %d.\n", soma, number);

 
    return 0;
}