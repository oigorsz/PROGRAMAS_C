#include <stdio.h>
#include <stdlib.h>

int main() {
    int alunos, acimaMedia = 0;

    system("cls");

    printf("DIGITE O NÚMERO TOTAL DE ALUNOS.\n => ");
    scanf("%i", &alunos);

    if (alunos <= 0) {
        printf("Número de alunos inválido. O programa será encerrado.\n");
        return 0;
    }

    double media[alunos], notas[4], soma;

    for (int i = 0; i < alunos; i++) {
        soma = 0.0;
        for (int j = 0; j < 4; j++) {
            printf("PROVA %i DO ALUNO %i: \n => ", j + 1, i + 1);
            scanf("%lf", &notas[j]);
            soma += notas[j];
            system("cls");
        }

        media[i] = soma / 4.0;
    }

    for (int i = 0; i < alunos; i++) {
        printf("MEDIA DO ALUNO %i: %.2lf.\n", i + 1, media[i]);
        if (media[i] > 7){
            acimaMedia += 1;
        }
    }

    printf("%i ALUNOS COM MEDIA ACIMA DE 7.00.\n", acimaMedia);

}
