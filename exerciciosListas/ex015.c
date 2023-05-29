#include <stdio.h>
#include <stdlib.h>

int main(){
    double notas[100], soma = 0.0, media, notasAcima[100], notasAbaixo[100];
    int quantidade = 0, acimaMedia = 0, baixoMedia = 0;

    system("cls");

    for(int i = 0; i < 100; i++){
        printf("DIGITE -1 PARA ENCERRAR.\n");
        printf("NOTA DA PROVA %d: \n=> ", i + 1);
        scanf("%lf", &notas[i]);

        if (notas[i] == -1){
            break;
        }

        soma += notas[i];
        quantidade++;
    }

    media = (soma)/quantidade;

    system("cls");

    printf("TOTAL DE NOTAS: %d.\n", quantidade);

    for(int i = 0; i < quantidade; i++){
        printf("%.2lf ", notas[i]);
        if (notas[i] > media){
            notasAcima[acimaMedia] = notas [i];
            acimaMedia++;
        }

        if(notas[i] < 7){
            notasAbaixo[baixoMedia] = notas[i];
            baixoMedia++;
        }
    }

    printf("\n");

    for (int i = quantidade - 1 ; i >= 0; i--){
        printf("%.2lf ", notas[i]);
    }

    printf("\nSOMA DAS NOTAS: %.2lf.\n", soma);
    printf("MEDIA DAS NOTAS: %.2lf.\n", media);

    printf("%d ESTÃO ACIMA DA MEDIA.\n", acimaMedia);
    for(int i = 0; i < acimaMedia; i++){
        printf("%.2lf ", notasAcima[i]);
    }

    printf("\n");

    if (baixoMedia > 0){
        printf("%d ESTÃO COM NOTA MENOR QUE 7.\n", baixoMedia);
        for(int i = 0; i < baixoMedia; i++){
         printf("%.2lf ", notasAbaixo[i]);
    }
    return 0;
    }

    printf("NÃO HÁ NOTAS MENOR QUE 7.\n");

    
    
}