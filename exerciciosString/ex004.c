#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[100];
    int tamanho;

    system("cls");

    printf("DIGITE O SEU NOME: \n => ");
    fgets(nome, sizeof(nome), stdin);

    system("cls");

    tamanho = strlen(nome);
    nome[tamanho - 1] = '\0';

    for(int i = 0; nome[i] != '\0'; i++){
        nome[i] = toupper(nome[i]);
    }

    printf("NOME: %s.\n", nome);
    printf("TAMANHO DA STRING: %d.\n", tamanho);

    printf("NOME EM ESCADA: \n");
    for(int i = 0; nome[i] != '\0'; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", nome[j]);
        }

        printf("\n");
    }

}