#include <stdio.h>
#include <stdlib.h>

int length(int number){
    int i;

    for(i = 0; number/10 != 0; i++){
        number /= 10;
    }

    return i + 1;
}


int main(void){
    int number, tamanho;

    system("cls");

    printf("DIGITE UM NUMERO INTEIRO QUALQUER: \n => ");
    scanf("%d", &number);

    system("cls");

    tamanho = length(number);

    printf("%d POSSUI %d DIGITOS", number, tamanho);


    return 0;
}