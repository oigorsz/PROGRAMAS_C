#include <stdio.h>
#include <stdlib.h>

int main(){
    int alunos, grupo = 0;
    double somaAltura = 0, mediaAltura;

    system("cls");

    printf("QUANTOS ALUNOS SERÃO ANALISADOS ? \n");
    scanf("%i", &alunos);

    system("cls");

    int idades[alunos];
    double alturas[alunos];

    for(int i = 0; i < alunos; i++){
        printf("DIGITE A IDADE DO ALUNO %i: \n => ", i + 1);
        scanf("%i", &idades[i]);
        printf("DIGITE A ALTURA EM METROS DO ALUNO %i: \n => ", i + 1);
        scanf("%lf", &alturas[i]);

        somaAltura += alturas[i];

        system("cls");
    }

    mediaAltura = somaAltura/alunos;

    for(int i = 0; i < alunos; i++){
        if(idades[i] > 13 && alturas[i] < mediaAltura){
            grupo += 1;
            continue;
        }
    }

    printf("MEDIA DE ALTURA DA TURMA: %.2lfm.\n", mediaAltura);
    printf("%i ALUNOS POSSUEM MAIS DE 13 ANOS E SÃO MENORES QUE A MEDIA DA TURMA.\n", grupo);

}