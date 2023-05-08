#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, media;

    printf("DIGITE A NOTA DA PROVA 1: \n => ");
    scanf("%lf", &nota1);

    printf("DIGITE A NOTA DA PROVA 2: \n => ");
    scanf("%lf", &nota2);

    system("cls");

    media = (nota1 + nota2)/2;

    printf("MEDIA: %.2lf.\n", media);

    if(media >= 10){
        printf("APROVADO COM DISTINÇÃO");
        return 0;
    }

    if (media >= 7 && media < 10){
        printf("APROVADO");
        return 0;
    }

    printf("REPROVADO");


}
