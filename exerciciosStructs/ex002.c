#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 100

struct tipo_pessoa {
    char nome[TAM];
    double nota;
    char resultado[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;


int main(void){
    int numRes;

    system("cls");

    printf("DIGITE O NUMERO DE REGISTROS: \n => ");
    scanf("%d", &numRes);


    tipo_pessoa lista[numRes];


    system("cls");

    for(int i = 0; i < numRes; i++){
        getchar(); // Consumir o caractere de nova linha
        printf("DIGITE O NOME DO ALUNO %d: \n=> ", i + 1);
        fgets(lista[i].nome, TAM, stdin);

        lista[i].nome[strlen(lista[i].nome) - 1] = '\0';


        for(int j = 0; j < strlen(lista[i].nome); j++){
            lista[i].nome[j] = toupper(lista[i].nome[j]);
        }



        system("cls");

        do {
            printf("DIGITE A NOTA FINAL DO ALUNO %d: \n=> ", i + 1);
            scanf("%lf", &lista[i].nota);
        } while(!(0 <= lista[i].nota && lista[i].nota <= 10));

        system("cls");

        if(lista[i].nota >= 7){
            strcpy(lista[i].resultado, "APROVADO");
        } else {
            strcpy(lista[i].resultado, "REPROVADO");
        }


    }

    for(int i = 0; i < numRes; i++){
        printf("%s ----- NOTA: %.2lf----- %s.\n", lista[i].nome, lista[i].nota, lista[i].resultado);
    }



    return 0;
}