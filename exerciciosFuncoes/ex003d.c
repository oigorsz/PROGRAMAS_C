#include <stdio.h>
#include <stdlib.h>


void paridade(int number){
    int npar = 0, nimpar = 0, aux;

    for(int i = 0; i < number; i++){
        system("cls");
        printf("DIGITE UM NUMERO INTEIRO: \n => ");
        scanf("%d", &aux);

        if(aux % 2 == 0){
            npar += 1;
            continue;
        }

        nimpar +=1;
    }

    system("cls");

    if(npar != 0 && nimpar == 0){
        printf("0\n");
    }
    if(npar == 0 && nimpar != 0){
        printf("1\n");
    }
    if(npar != 0 && nimpar != 0){
        printf("-1\n");
    }
}



int main(void){
    int number;

    system("cls");

    printf("QUANTOS NUMEROS SERAO VERIFICADOS:\n => ");
    scanf("%d", &number);

    paridade(number);

    return 0;
}