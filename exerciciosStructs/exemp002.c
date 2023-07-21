#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(void){
    int num;

    system("cls");

    printf("QUANTAS PESSOAS PARA CADASTRO: \n=> ");
    scanf("%d", &num);

    tipo_pessoa lista[num];

    for(int i = 0; i < num; i++){
        printf("DADOS DA PESSOA %d.\n\n", i + 1);

        fflush(stdin);
        puts("DIGITE O NOME DA PESSOA: ");
        fgets(lista[i].nome, sizeof(lista[i].nome), stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';


        printf("DIGITE A IDADE DA PESSOA: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("DIGITE O PESSO DA PESSOA: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);

    }

    system("cls");

    for(int i = 0; i < num; i++){
        printf("PESSOA %d\n", i + 1);

        printf("NOME : %s.\n", lista[i].nome);
        printf("IDADE : %d.\n", lista[i].idade);
        printf("PESO : %.2f.\n", lista[i].peso);

        printf("\n\n");

    }

    
    return 0;
}