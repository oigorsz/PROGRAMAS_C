#include <stdio.h>
#include <stdlib.h>

int encaixa(int numA, int numB){
    int number = numA%1000;

    if(numB < numA && numB == number){
        return 1;
    }

    return 0;
}


int main(void){
    int numA, numB;

    system("cls");

    printf("DIGITE UM NUMERO: \n => ");
    scanf("%d", &numA);

    system("cls");

    printf("DIGITE OUTRO NUMERO: \n => ");
    scanf("%d", &numB);

    system("cls");

    if (encaixa(numA, numB)){
        printf("ENCAIXA.\n");
    } else {
        printf("NAO ENCAIXA.\n");
    }

    return 0;
}