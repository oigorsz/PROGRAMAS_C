#include <stdio.h>
#include <stdlib.h>

void requestNumber(int* number){

    int erro = 0;

    do {
        system("cls");

        if (erro == 1){
            printf("VALOR NAO VALIDO.\n\n");
        }
        
        printf("DIGITE UM NUMERO INTEIRO POSITIVO:\n => ");
        scanf("%d", &*number);

        erro = 1;
    } while(*number < 0);
    
}

int reverseNumber(int number){
    int reversedNumber = 0;

    while(number != 0){
        reversedNumber = reversedNumber*10 + number%10;
        number /=10;
    }

    return reversedNumber;
}


void printReverse(int number, int reversedNumber){
    system("cls");
    printf("O INVERSO DE %d E %d.\n", number, reversedNumber);
}



int main(void){
    int number;
    int reversedNumber;

    requestNumber(&number);
    reversedNumber = reverseNumber(number);
    printReverse(number, reversedNumber);


    return 0;
}