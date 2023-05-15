#include <stdio.h>
#include <stdlib.h>

int main(){
    int number, fatorial = 1;

    system("cls");

    printf("DIGITE UM NÚMERO INTEIRO POSITIVO: \n => ");
    scanf("%i", &number);

    system("cls");

    printf("%i ! = ", number);

    for (int i =  number; i >= 2; i--){
        printf("%i X ", i);
        fatorial *= i; 
    }

    printf("1.\n");
   

    printf("FATORIAL: %d.\n", fatorial);
}