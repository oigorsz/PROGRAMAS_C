#include <stdio.h>
#include <stdlib.h>

int main(){
    double alturas[5];
    int idades[5];

    system("cls");

    for(int i = 0; i <= 4; i++){
        printf("DIGITE A IDADE DA PESSOA %i: \n => ", i + 1);
        scanf("%i", &idades[i]);
        printf("DIGITE, EM METROS, A ALTURA DA PESSOA %i: \n => ", i + 1);
        scanf("%lf", &alturas[i]);
        system("cls");
    }

    system("cls");

    for(int i = 4; i >= 0; i--){
        printf("PESSOA %i- IDADE: %i. - ALTURA: %.2lfm.\n", i + 1, idades[i], alturas[i]);
    }
}