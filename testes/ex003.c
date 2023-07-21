#include <stdio.h>
#include <stdlib.h>


double media(double n1, double n2, double n3){
    double media = (n1 + n2 + n3)/3;
    return media;
}

int resultado(double media){
    if (media >= 7){
        return 1;
    }
    return 0;
}

int main(void){
    double n1, n2, n3;

    system("cls");

    printf("DIGITE A NOTA 1:\n =>");
    scanf("%lf", &n1);

    printf("DIGITE A NOTA 2:\n => ");
    scanf("%lf", &n2);

    printf("DIGITE A NOTA 3:\n => ");
    scanf("%lf", &n3);

    system("cls");

    printf("MEDIA: %.2lf.\n", media(n1,n2,n3));

    if(resultado(media(n1,n2,n3))){
        printf("APROVADO.\n");
        return 0;
    }

    printf("REPROVADO.\n");
}