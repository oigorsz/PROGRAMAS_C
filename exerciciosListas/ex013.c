#include <stdio.h>
#include <stdlib.h>

int main(){
    double temperaturas[12], soma = 0, media;
   

    system("cls");

    for(int i = 0; i <= 11; i++){
        printf("DIGITE A TEMPERATURA MEDIA DO MES %i EM ºC:\n => ", i + 1);
        scanf("%lf", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = (soma)/12.00;

    system("cls");

    printf("TEMPERATURAS ACIMA DA MEDIA ANUAL:\n");

    for(int i = 0; i <= 11; i++){
        if(temperaturas[i] > media){
            if (i == 0){
                printf("MEDIA 1-JANEIRO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 1){
                printf("MEDIA 2-FEVEREIRO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 2){
                printf("MEDIA 3-MARÇO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 3){
                printf("MEDIA 4-ABRIL - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 4){
                printf("MEDIA 5-MAIO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 5){
                printf("MEDIA 6-JUNHO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 6){
                printf("MEDIA 7-JULHO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 7){
                printf("MEDIA 8-AGOSTO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 8){
                printf("MEDIA 9-SETEMBRO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 9){
                printf("MEDIA 10-OUTUBRO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 10){
                printf("MEDIA 11-NOVEMBRO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
            if (i == 11){
                printf("MEDIA 12-DEZEMBRO - %.2lfºC // MEDIA ANUAL - %.2lfºC.\n", temperaturas[i], media);
            }
        }
    }


}