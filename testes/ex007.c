#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct aluno {
    char nome[100];
    int idade;
    double altura;
};

typedef struct aluno aluno;


int main(void){
    aluno estudante;
    system("cls");

    printf("DIGITE O NOME DO ALUNO:\n => ");
    fgets(estudante.nome, sizeof(estudante.nome), stdin);
    estudante.nome[strlen(estudante.nome) - 1] = '\0';

    for(int i = 0; i < strlen(estudante.nome); i++){
        estudante.nome[i] = toupper(estudante.nome[i]);
    }

    system("cls");

    printf("DIGITE A IDADE DO ALUNO:\n => ");
    scanf("%d", &estudante.idade);

    system("cls");

    printf("DIGITE A ALTURA(EM METROS) DO ALUNO:\n => ");
    scanf("%lf", &estudante.altura);

    system("cls");

    printf("NOME: %s.\nIDADE: %d.\nALTURA: %.2lf", estudante.nome, estudante.idade, estudante.altura);
}