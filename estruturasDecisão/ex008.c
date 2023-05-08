#include <stdio.h>
#include <stdlib.h>

int main()
{
    double produto1, produto2, produto3,valor;

    printf("DIGITE O PREÇO EM REAIS DO PRODUTO 1: \n => ");
    scanf("%lf", &produto1);

    
    printf("DIGITE O PREÇO EM REAIS DO PRODUTO 2: \n => ");
    scanf("%lf", &produto2);

    printf("DIGITE O PREÇO EM REAIS DO PRODUTO 3: \n => ");
    scanf("%lf", &produto3);

    system("cls");

    if (produto1 == produto2 && produto1 == produto3 && produto2 == produto3) {
        printf("TODOS SÃO IGUAIS.\n");
        return 0;
    }

    if (produto1 < produto2 && produto1 < produto3) {
        printf("O PRODUTO 1 É O IDEAL.\n");
        valor = produto1;
    }

    if (produto2 < produto1 && produto2 < produto3) {
        printf("O PRODUTO 2 É O IDEAL.\n");
        valor = produto2;
    }
    if (produto3 < produto1 && produto3 < produto2) {
        printf("O PRODUTO 3 É O IDEAL.\n");
        valor = produto3;
    }

    printf("VALOR: R$%.2lf.\n", valor);
    
    return 0;

}
