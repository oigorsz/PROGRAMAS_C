#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 50

//DEFININDO O STRUC

struct tipo_pessoa{
        int idade;
        float peso;
        char nome[TAM];
    };

//RENOMEANDO O STRUCT

typedef struct tipo_pessoa tipo_pessoa;



int main(){

    system("cls");

    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("INÍCIO:\n");
    printf("IDADE: %d.\n", pes.idade);
    printf("PESO: %.2f.\n", pes.peso);
    printf("NOME: %s.\n", pes.nome);

    printf("ATRIBUINDO VALORES.\n");

    pes.idade = 18;
    pes.peso = 56.00;
    strcpy(pes.nome, "IGOR");

    printf("IDADE: %d.\n", pes.idade);
    printf("PESO: %.2f.\n", pes.peso);
    printf("NOME: %s.\n", pes.nome);

    printf("DIGITE SUA IDADE: \n");
    scanf("%d", &pes.idade);
    printf("DIGITE O SEU PESO (Kg): \n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("DIGITE O SEU NOME: \n");
    scanf("%s", &pes.nome);



    printf("IDADE: %d.\n", pes.idade);
    printf("PESO: %.2f.\n", pes.peso);
    printf("NOME: %s.\n", pes.nome);


}