#include <stdio.h>
#include <stdlib.h>

int main(){
    double nota1, nota2, nota3, media;

    system("cls");

    printf("DIGITE A NOTA DA PROVA 1: \n => ");
    scanf("%lf", &nota1);

    printf("DIGITE A NOTA DA PROVA 2: \n => ");
    scanf("%lf", &nota2);

    printf("DIGITE A NOTA DA PROVA 3: \n => ");
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    system("cls");

    if (media == 10){
        printf("APROVADO COM DISTINÇÃO.\n");
    }
    if (7 <= media && media < 10){
        printf("APROVADO.\n");
    }
    if (media < 7){
        printf("REPROVADO.\n");
    }

    printf("MEDIA FINAL: %.2lf.\n", media);

}