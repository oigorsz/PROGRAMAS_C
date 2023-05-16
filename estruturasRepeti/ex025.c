#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, idade, media, soma = 0;

    system("cls");

    while(idade >= 0){
        printf("DIGITE -1 PARA FINALIZAR.\n");
        printf("DIGITE A IDADE EM ANOS: \n => ");
        scanf("%i", &idade);
        if (idade < 0){
            continue;
        }

        soma += idade;
        i++;

        system("cls");
    }

    media = soma/i;

    if (0 <= media && media <= 25){
        printf("TURMA JOVEM.\n");
    }
    if (26 <= media && media <= 60){
        printf("TURMA ADULTA.\n");
    }
    if (61 <= media && media <= 100){
        printf("TURMA IDOSO.\n");
    }

    printf("MEDIA: %i", media);
}