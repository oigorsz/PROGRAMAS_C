#include <stdio.h>
#include <stdlib.h>

int main(){
    double temperaturaC, maior, menor, media, soma = 0;
    int i;

    maior = 0;



    system("cls");
    
    for(i = 0; temperaturaC != 0; i++){
        printf("DIGITE 0 PARA FINALIZAR.\n");
        printf("DIGITE A TEMPERATURA EM °C: \n => ");
        scanf("%lf", &temperaturaC);

        if (temperaturaC == 0){
            i--;
        }

        soma += temperaturaC;

        if (temperaturaC > maior){
            menor = maior;
            maior = temperaturaC;
        }

    }

    media = soma/i;

    system("cls");

    printf("MÉDIA DAS TEMPERATURAS: %.2lf°C.\n", media);
    printf("MAIOR TEMPERATURA: %.2lf°C.\n", maior);
    printf("MENOR TEMPERATURA: %.2lf°C.\n", menor);


}