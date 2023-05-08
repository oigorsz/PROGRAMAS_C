#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, impar = 0, par = 0;

    system("cls");

    for(int i = 0; i < 10; i++){
        printf("DIGITE UM NÚMERO INTEIRO: \n => ");
        scanf("%i", &num);

        if (num%2 == 0){
            par += 1;
        } 

        if (num%2 != 0){
            impar += 1;
        }

        system("cls");
    }

    printf("NÚMEROS PARES: %i.\n", par);
    printf("NÚMEROS ÍMPARES: %i.\n", impar);
}