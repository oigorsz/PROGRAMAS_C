#include <stdio.h>
#include <stdlib.h>


char * verificador(int num){
    char * letra;

    if (num > 0){
        letra = "P";
    } else {
        letra = "N";
    }

    return letra;
}

int main(void){
    int num;

    system("cls");

    printf("DIGITE UM NUMERO:\n => ");
    scanf("%d", &num);

    system("cls");

    printf("%c", verificador(num));

    return 0;
}