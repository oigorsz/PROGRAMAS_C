#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo;
    double produto1 = 4.50, produto2 = 3.20, produto3 = 1.50, soma = 0, valor, troco;

    system("cls");

    do {
        printf("CÓDIGO DE COMPRAS\nPRODUTO 1: R$4.50.\nPRODUTO 2: R$3.20.\nPRODUTO 3: R$1.50.\nFINALIZAR: 0.\n\n\n");
        printf("DIGITE O CÓDIGO DO PRODUTO: \n=> ");
        scanf("%i", &codigo);

        system("cls");

        if (codigo == 1){
            soma += produto1;
            continue;
        }

        if (codigo == 2){
            soma += produto2;
            continue;
        }

        if (codigo == 3){
            soma += produto3;
            continue;
        }

    } while(codigo != 0);

    printf("VALOR DADO AO CAIXA: \n => ");
    scanf("%lf", &valor);
    troco = valor - soma;

    system("cls");

    printf("TOTAL A PAGAR: R$%.2lf.\n", soma);
    printf("VALOR DADO AO CAIXA: R$%.2lf.\n", valor);
    printf("TROCO: R$%.2lf.\n", troco);

}