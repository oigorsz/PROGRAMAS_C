#include <stdio.h>
#include <stdlib.h>

double somaImposto(double custo, double taxa){
    double final;

    final = custo + custo*(taxa/100);

    return final;
}


int main(void){
    double custo, taxa;

    system("cls");

    printf("DIGITE O CUSTO DO PRODUTO EM R$: \n => ");
    scanf("%lf", &custo);

    printf("QUAL A PORCENTAGEM DA TAXA: \n => ");
    scanf("%lf", &taxa);

    system("cls");

    printf("CUSTO: R$%.2lf\n", custo);
    printf("TAXA: %.2lf%%\n", taxa);
    printf("VALOR FINAL: R$%.2lf\n", somaImposto(custo, taxa));

    return 0;
}