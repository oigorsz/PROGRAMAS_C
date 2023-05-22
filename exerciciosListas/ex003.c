#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    double notas[4], soma = 0, media;

    for(int i = 0; i <= 3; i++){
        printf("DIGITE A NOTA %i: \n => ", i +1);
        scanf("%lf", &notas[i]);
        soma += notas[i];
        system("clear");
    }

    media = soma / 4.00;

    for(int i = 0; i <= 3; i++){
        printf("ALUNO %i- NOTA: %.2lf- MEDIA TURMA: %.2lf.\n", i + 1, notas[i], media);
    }

}