#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>


#define MAX_CARACTER 20
#define MAX_PALAVRAS 10

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void){
//BANCO DE PALAVRAS
char palavras[MAX_PALAVRAS][MAX_CARACTER] = {
    "PROGRAMACAO",
    "LINGUAGEM",
    "COMPUTADOR",
    "DESENVOLVIMENTO",
    "ALGORITMO",
    "ESTRUTURA",
    "VARIAVEL",
    "CONDICIONAL",
    "ITERACAO",
    "FUNCAO"
};

srand(time(NULL));

int totalPalavras = MAX_PALAVRAS;

system("cls");

//SELECIONE UMA PALAVRA ALEATORIAMENTE

int indicePalavra = rand() % totalPalavras;
char palavra[MAX_CARACTER];
strcpy(palavra, palavras[indicePalavra]);//prencher a palavra escolhida com uma do banco de dados

int tamanhoPalavra = strlen(palavra);
char palavraAdivinhada[MAX_CARACTER];
memset(palavraAdivinhada, '_', tamanhoPalavra);
palavraAdivinhada[tamanhoPalavra] = '\0';

int tentativas = 6;
int acertos = 0;

while (tentativas > 0 && acertos < tamanhoPalavra){
    printf("PALAVRA: %s\n", palavraAdivinhada);
    printf("TENTATIVAS RESTANTES: %d\n", tentativas);

    char letra;
    printf("DIGITE UMA LETRA: \n => ");
    scanf("%c", &letra);
    limparBuffer();

    int letraEncontrada = 0;
    for(int i = 0; i < tamanhoPalavra; i++){
        if (palavra[i] == letra){
            palavraAdivinhada[i] = letra;
            acertos++;
            letraEncontrada = 1;
        }
    }

    system("cls");


    if(!letraEncontrada){
        tentativas --;
        printf("LETRA INCORRETA !\n");
    }

    if(acertos == tamanhoPalavra){
        printf("PARABENS, VOCE GANHOU.\n");
    }

    if(tentativas == 0){
        printf("VOCE PERDEU, A PALAVRA ERA %s.\n", palavra);
    }

}

return 0;
}