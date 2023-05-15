#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0;

    system("cls");

    do {
        printf("DIGITE UM NÚMERO INTEIRO POSITIVO: \n => ");
        scanf("%i", &num);

        if ( 0 <= num && num <= 25){
            i1 += 1;
        }
        if (26 <= num && num <= 50){
            i2 += 1;
        }
        if (51 <= num && num <= 75){
            i3 += 1;
        }
        if (76 <= num && num <= 100){
            i4 += 1;
        }
        if (num > 100){
            i5 += 1;
        }

        system("cls");



    } while(num >= 0);

    system("cls");

    printf("%d ESTÃO NO INTERVALO [0,25].\n", i1);
    printf("%d ESTÃO NO INTERVALO [26,50].\n", i2);
    printf("%d ESTÃO NO INTERVALO [51,75].\n", i3);
    printf("%d ESTÃO NO INTERVALO [76,100].\n", i4);
    printf("%d ESTÃO FORA DOS INTERVALOS DETERMINADOS.\n", i5);
}