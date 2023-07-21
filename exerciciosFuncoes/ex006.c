#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void converterHorario(int horas,int minutos, char* periodo, int* hora12){
    if(horas > 12){
        *hora12 = horas - 12;
        *periodo = 'P';
    } else {
        *hora12 = horas;
        *periodo = 'A';
    }
}

void imprimirHorario(int hora12, int minutos, char periodo){
    if(periodo == 'A'){
        printf("%02d:%02d A.M \n\n", hora12, minutos);
    } else {
        printf("%02d:%02d P.M \n\n", hora12, minutos);
    }
}



int main(void){
    int horas, minutos, hora12;
    char periodo, resposta[5];

    system("cls");

    do {
        system("cls");

        do {
            printf("DIGITE AS HORAS (0-23): \n => ");
            scanf("%d", &horas);
            getchar();  // Consumir o caractere de nova linha
        } while (!(0 <= horas && horas <= 24));

        do {
            printf("DIGITE OS MINUTOS (0-59): \n => ");
            scanf("%d", &minutos);
            getchar();  // Consumir o caractere de nova linha
        } while (!(0 <= minutos && minutos <= 59));

        system("cls");

        converterHorario(horas, minutos, &periodo, &hora12);
        imprimirHorario(hora12, minutos, periodo);

        printf("DIGITE N PARA ENCERRAR O PROCESSO.\n");
        printf("DIGITE S PARA CONTINUAR CONVERTENDO\n");
        fgets(resposta, sizeof(resposta), stdin);

    } while(resposta[0] == 'S' || resposta[0] == 's');

    printf("CONVERSOR FINALIZADO.\n");
    
    return 0;
}