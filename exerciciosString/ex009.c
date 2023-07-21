#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validoCpf(char cpf[50]){
    int tamCpf = strlen(cpf);
    cpf[tamCpf - 1] = '\0';

    if(tamCpf == 15 && cpf[3] == '.' && cpf[7] == '.' && cpf[11] == '-'){
        return 1;
    }

    return 0;
    
}

int main(void){
    char nome[100], cpf[50];
    int tamNome;

    system("cls");

    printf("DIGITE O SEU NOME COMPLETO: \n=> ");
    fgets(nome, sizeof(nome), stdin);
    tamNome = strlen(nome);
    nome[tamNome - 1] = '\0';

    for(int i = 0; i < tamNome; i++){
        nome[i] = toupper(nome[i]);
    }

    system("cls");

    do {
        printf("DIGITE O SEU CPF (xxx.xxx.xxx-xx): \n => ");
        fgets(cpf, sizeof(cpf), stdin);
    } while(!validoCpf(cpf));

    system("cls");


    printf("NOME: %s.\n", nome);
    printf("CPF: %s.\n", cpf);


    return 0;
}