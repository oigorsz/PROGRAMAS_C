#include <stdio.h>
#include <stdlib.h>

int main(){
    float base, resultado = 1;
    int expoente;

    system("cls");

    printf("DIGITE O NÚMERO DA BASE: \n => ");
    scanf("%f", &base);

    system("cls");

    printf("DIGITE O NÚMERO DO EXPOENTE: \n => ");
    scanf("%i", &expoente);

    if (expoente >= 0){
        for (int i = 0; i < expoente; i++){
        resultado *= base;
    }
    }

    if (expoente < 0){
        for (int i = 0; i < -1*expoente; i++){
            resultado *= 1/base;
        }
    }

    printf("RESULTADO: %.2f", resultado);

}