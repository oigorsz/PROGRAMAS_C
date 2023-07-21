#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

void requestData(char data[TAM]){
    system("cls");
    
    printf("DIGITE UMA DATA NO TIPO (DD/MM/AAAA):\n => ");
    fgets(data, TAM, stdin);

    data[strlen(data) - 1] = '\0';

}

int validar(char data[TAM]){
    if(data[2] != '/' || data[5] != '/' || strlen(data) != 10){
        return 0;
    } else {
        return 1;
    }
}

void conversor(char data[TAM]){
    int dia, mes, ano, valido = 0;
    char nomeMes[40];
    

    sscanf(data, "%d/%d/%d", &dia, &mes, &ano); //separa a string em numeros


    if(0 <= dia && dia <= 31 && 0<= mes && mes <= 12){
            valido = 1;
    }

    switch (mes)
    {
    case 1:
        sprintf(nomeMes, "JANEIRO");
        break;
    case 2:
        sprintf(nomeMes, "FEVEREIRO");
        break;
    case 3:
        sprintf(nomeMes, "MARCO");
        break;
    case 4:
        sprintf(nomeMes, "ABRIL");
        break;
    case 5:
        sprintf(nomeMes, "MAIO");
        break;
    case 6:
        sprintf(nomeMes, "JUNHO");
        break;
    case 7:
        sprintf(nomeMes, "JULHO");
        break;
    case 8:
        sprintf(nomeMes, "AGOSTO");
        break;
    case 9:
        sprintf(nomeMes, "SETEMBRO");
        break;
    case 10:
        sprintf(nomeMes, "OUTUBRO");
        break;
    case 11:
        sprintf(nomeMes, "NOVEMBRO");
        break;
    case 12:
        sprintf(nomeMes, "DEZEMBRO");
        break;
    default:
        break;
    }

    if(valido == 1){
        printf("%d DE %s DE %d.\n", dia, nomeMes, ano);
    } else {
        printf("NULL");
    }

}



int main(void){
    char data[TAM];

    requestData(data);

    if (!validar(data)){
        printf("NULL.\n");
        return 0;
    }

    conversor(data);

    return 0;
}