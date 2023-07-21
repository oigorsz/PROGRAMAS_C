#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_PALAVRAS 10
#define MAX_CARACTER 20

int main(void){
    system("cls");

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

    //TORNA ALEÁTORIA A CHAMDA
    srand(time(NULL));

    //ESCOLHER UMA PALAVRA NA CHAMADA
    int totalPalavras = MAX_PALAVRAS;
    int indicePalavra = rand() % totalPalavras;
    char palavra[MAX_CARACTER];
    strcpy(palavra, palavras[indicePalavra]);

    //OCULTAR A PALAVRA

    int tamanhoPalavra = strlen(palavra);
    char palavraAdivinhada[tamanhoPalavra];
    memset(palavraAdivinhada, '_', tamanhoPalavra);
    palavraAdivinhada[tamanhoPalavra] = '\0';

    int tentativas = 6;
    int acertos = 0;
    int jogadas = 0;

    while (acertos < tamanhoPalavra && tentativas > 0){
        printf("PALAVRA %s.\n", palavraAdivinhada);
        printf("TENTATIVAS: %d.\n", tentativas);

        
        char letra[3];
        
        printf("DIGITE UMA LETRA : ");
        fgets(letra, sizeof(letra), stdin);
        letra[0] = toupper(letra[0]);


        int letraEncontrada = 0;
        for(int i = 0; i < tamanhoPalavra; i++){
            if(letra[0] == palavra[i]){
                palavraAdivinhada[i] = letra[0];
                acertos++;
                letraEncontrada = 1;
            }
        }

        system("cls");

        if(!letraEncontrada){
            tentativas--;
            printf("LETRA INCORRETA.\n");
        } 

        if(acertos == tamanhoPalavra){
            printf("PARABENS, VOCE ACERTOU.\n");
        }

        if(tentativas == 0){
            printf("VOCE PERDEU, A PALAVRA ERA %s.\n", palavra);
        }

    }

    return 0;
}