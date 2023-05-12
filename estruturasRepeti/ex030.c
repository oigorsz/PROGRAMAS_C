#include <stdio.h>
#include <stdlib.h>

int main(){
    double custo;

    system("cls");

    printf("QUAL O VALOR UNITÁRIO DO PÃO EM R$: \n => ");
    scanf("%lf", &custo);

    system("cls");


    printf("TABELA DE PREÇOS DO PÃO.\n");

    for(int i = 1; i <= 50; i++){
        printf("%i - R$%.2lf.\n", i, custo*i);
    }
}