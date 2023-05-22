#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros [5];

    system("clear");

    for(int i = 0; i <= 4; i++){
        printf("DIGITE UM NÚMERO: \n => ");
        scanf("%i", &numeros[i]);
        system("clear");
    }

    system("clear");

    for(int i = 0; i <= 4; i++){
        printf("%i - %i.\n", i + 1, numeros[i]);
    }
}