#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[100];
    int tamanho;

    system("cls");

    printf("DIGITE O SEU NOME PRIMEIRO NOME: \n=> ");
    fgets(nome, sizeof(nome), stdin);
    tamanho = strlen(nome);
    nome[tamanho - 1] = '\0';

    system("cls");
    printf("OLA %s\nBEM VINDO.\n", nome);
    printf("TAMANHO DA STRING: %d.\n", tamanho);
}