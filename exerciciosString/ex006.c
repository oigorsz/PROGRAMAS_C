#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char data[13], mes[6];
    char nome[50];
    int tamData, tamNome, codMes;

    system("cls");

    printf("DIGITE O SEU NOME: \n=> ");
    fgets(nome, sizeof(nome), stdin);
    tamNome = strlen(nome);
    nome[tamNome-1] = '\0';

    for(int i = 0; i < tamNome; i++){
        nome[i] = toupper(nome[i]);
    }

    system("cls");

    printf("DIGITE A SUA DATA DE NASCIMENTO(dd/mm/aa): \n=>");
    fgets(data, sizeof(data), stdin);
    tamData = strlen(data);
    data[tamData - 1] = '\0';


    mes[0] = data[3];
    mes[1] = data[4];


    if(mes[0] == '0' && mes[1] == '1'){
        codMes = 1;
    }
    if(mes[0] == '0' && mes[1] == '2'){
        codMes = 2;
    }
    if(mes[0] == '0' && mes[1] == '3'){
        codMes = 3;
    }
    if(mes[0] == '0' && mes[1] == '4'){
        codMes = 4;
    }
    if(mes[0] == '0' && mes[1] == '5'){
        codMes = 5;
    }
    if(mes[0] == '0' && mes[1] == '6'){
        codMes = 6;
    }
    if(mes[0] == '0' && mes[1] == '7'){
        codMes = 7;
    }
    if(mes[0] == '0' && mes[1] == '8'){
        codMes = 8;
    }
    if(mes[0] == '0' && mes[1] == '9'){
        codMes = 9;
    }
    if(mes[0] == '1' && mes[1] == '0'){
        codMes = 10;
    }
    if(mes[0] == '1' && mes[1] == '1'){
        codMes = 11;
    }
    if(mes[0] == '1' && mes[1] == '2'){
        codMes = 12;
    }

    printf("NOME: %s.\n", nome);
    printf("VOCE NASCEU NO DIA %c%c DE ", data[0], data[1]);

    switch (codMes)
    {
    case 1 :
        printf("JANEIRO ");
        break;
    case 2:
        printf("FEVEREIRO ");
        break;
    case 3:
        printf("MARCO ");
        break;
    case 4:
        printf("ABRIL ");
        break;
    case 5:
        printf("MAIO ");
        break;
    case 6:
        printf("JUNHO ");
        break;
    case 7:
        printf("JULHO ");
        break;
    case 8:
        printf("AGOSTO ");
        break;
    case 9:
        printf("SETEMRBO ");
        break;
    case 10:
        printf("OUTUBRO ");
        break;
    case 11:
        printf("NOVEMBRO ");
        break;
    case 12:
        printf("DEZEMBRO ");
        break;
    
    default:
        break;
    }

    printf("DE %c%c%c%c.\n", data[6], data[7], data[8], data[9]);


    return 0;
}