#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 50


struct tipo_aluno {
    char nome[TAM];
    int ra;
    float nota;
    int freq;
};

typedef struct tipo_aluno tipo_aluno;

int main(void){

    tipo_aluno aluno;

    system("cls");

    printf("DIGITE O NOME DO ALUNO: \n=> ");
    fgets(aluno.nome, TAM , stdin);
    aluno.nome[strlen(aluno.nome) - 1] = '\0';
    
    for(int i = 0; i < strlen(aluno.nome); i++){
        aluno.nome[i] = toupper(aluno.nome[i]);
    }
   
    system("cls");

    printf("DIGITE O RA DO ALUNO: \n=> ");
    scanf("%d", &aluno.ra);

    system("cls");

    printf("DIGITE A NOTA FINAL DO ALUNO: \n => ");
    scanf("%f", &aluno.nota);

    system("cls");

    printf("NOME: %s.\n", aluno.nome);
    printf("RA: %d.\n", aluno.ra);
    printf("NOTA FINAL: %.2f.\n", aluno.nota);


    return 0;
}