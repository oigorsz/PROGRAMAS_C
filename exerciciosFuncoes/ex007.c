#include <stdio.h>
#include <stdlib.h>

void leitor(double pagamentos[200], int diasPosVencimento[200], int* quantidades){
    int i;

    for(i = 0; pagamentos[i] != 0.0; i++){
        do {
            system("cls");
            printf("DIGITE O VALOR DO PAGAMENTO %d EM R$:\n => ", i + 1);
            scanf("%lf", &pagamentos[i]);
        } while(!(pagamentos[i] >= 0));

        if(pagamentos[i] == 0){
            i--;
            break;
        }
        
        do {
            printf("DIGITE O NUMERO DE DIAS EM ATRASO DO PAGAMENTO %d:\n => ", i + 1);
            scanf("%d", &diasPosVencimento[i]);
        } while(!(diasPosVencimento[i] >= 0));
    }

    *quantidades = i;
}

void valorPagamento(double pagamentos[200], int diaPosVencimento[200], int quantidades){
    int j;
    for(j = 0; j <= quantidades; j++){
        if (diaPosVencimento[j] > 0){
        pagamentos[j] = 1.03*pagamentos[j] + (0.01*pagamentos[j]*diaPosVencimento[j]);
    }
    }
}

void relatorio(double pagamentos[200], int quantidades){
    int j;
    double soma = 0.0;
    system("cls");
    printf("RELATORIO DE RECEBIMENTOS.\n");

    for(j = 0; j <= quantidades; j++){
        soma += pagamentos[j];
        printf("%02d - R$%.2lf \n", j + 1, pagamentos[j]);
    }

    printf("SOMA DE RECEBIMENTOS: R$%.2lf.\n", soma);
}


int main(void){
    system("cls");

    double pagamentos[200];
    int diasPosVencimento[200];
    int quantidades;
    
    leitor(pagamentos, diasPosVencimento, &quantidades);
    valorPagamento(pagamentos, diasPosVencimento, quantidades);
    relatorio(pagamentos, quantidades);

    return 0;
}