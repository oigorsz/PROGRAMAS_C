#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, fatorial;

    system("cls");

    printf("DIGITE UM NÚMERO INTEIRO: \n => ");
    scanf("%d", &num);

    for(fatorial = 1; num >1; num = num -1){
        fatorial *= num;
    }

    system("cls");

    printf("FATORIAL: %d.\n", fatorial);
}