#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, med;
    char conceito;

    printf("DIGITE A NOTA DA PROVA 1: \n => ");
    scanf("%lf", &nota1);

    printf("DIGITE A NOTA DA PROVA 2: \n => ");
    scanf("%lf", &nota2);

    med = (nota1 + nota2)/ 2;

    if (9 <= med && med <= 10){
        conceito = 'A';
    }
    if (7.5 <= med && med < 9){
        conceito = 'B';
    }
    if (6 <= med && med < 7.5){
        conceito = 'C';
    }
    if (4 <= med && med < 6){
        conceito = 'D';
    }
    if (0 < med && med < 4){
        conceito = 'E';
    }

    system("cls");

    printf("NOTA 1: %.2lf.\n", nota1);
    printf("NOTA 2: %.2lf.\n", nota2);
    printf("MEDIA: %.2lf.\n", med);
    printf("CONCEITO: \"%c\".\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C'){
        printf("APROVADO.\n");
        return 0;
    }

    printf("REPROVADO.\n");
}
