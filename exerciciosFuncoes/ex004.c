#include <stdio.h>
#include <stdlib.h>

void identificador(double number){
    if (number <= 0){
        printf("N\n");
    } else {
        printf("P\n");
    }

}

int main(void){
    double number;

    system("cls");

    printf("DIGITE UM NUMERO QUALQUER: \n => ");
    scanf("%lf", &number);

    system("cls");

    identificador(number);



    return 0;
}