#include <stdio.h>
#include <stdlib.h>

int main () {
    int turmas, alunos = 0, total = 0, media = 0;

    system("cls");

    printf("DIGITE O NÚMERO DE TURMAS DE UMA ESCOLA: \n => ");
    scanf("%i", &turmas);

    system("cls");

    for(int i = 1; i <= turmas; i++){
        printf("QUANTOS ALUNOS HÁ NA TURMA %i: \n=> ", i);
        scanf("%i", &alunos);
        if (alunos > 40){
            printf("AS TURMAS NÃO PODEM TER MAIS QUE 40 ALUNOS.\n");
            i--;
            continue;
        }

        total += alunos;
        system("cls");
    }

    system("cls");

    media = (total)/turmas;

    printf("TOTAL DE TURMAS: %i.\n", turmas);
    printf("TOTAL DE ALUNOS: %i.\n", total);
    printf("MEDIA DE ALUNOS POR TURMA: %i.\n", media);
}