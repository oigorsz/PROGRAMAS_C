#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printUnidades(int num){
    switch (num)
    {
    case 1:
        printf("UM");
        break;
    case 2:
        printf("DOIS");
        break;
    case 3:
        printf("TRES");
        break;
    case 4:
        printf("QUATRO");
        break;
    case 5:
        printf("CINCO");
        break;
    case 6:
        printf("SEIS");
        break;
    case 7:
        printf("SETE");
        break;
    case 8:
        printf("OITO");
        break;
    case 9:
        printf("NOVE");
        break;
    default:
        break;
    }
}

void printDezenas(int num){
    switch (num)
    {
    case 10:
        printf("DEZ");
        break;
    case 11:
        printf("ONZE");
        break;
    case 12:
        printf("DOZE");
        break;
    case 13:
        printf("TREZE");
        break;
    case 14:
        printf("QUATORZE");
        break;
    case 15:
        printf("QUINZE");
        break;
    case 16:
        printf("DEZESSEIS");
        break;
    case 17:
        printf("DEZESSETE");
        break;
    case 18:
        printf("DEZOITO");
        break;
    case 19:
        printf("DEZENOVE");
        break;
    case 20:
        printf("VINTE");
        break;
    case 30:
        printf("TRINTA");
        break;
    case 40:
        printf("QUARENTA");
        break;
    case 50:
        printf("CINQUENTA");
        break;
    case 60:
        printf("SESSENTA");
        break;
    case 70:
        printf("SETENTA");
        break;
    case 80:
        printf("OITENTA");
        break;
    case 90:
        printf("NOVENTA");
        break;

    default:
        printf("NUMERO INVALIDO.\n");
        break;
    }

}

void conversor(int num){
    if (num >= 1 && num <= 9){
        printUnidades(num);
    }

    if(num >= 10 && num <= 99){
        if (num <= 19){
            printDezenas(num);
        }
        else {
            int dezena = (num/10) * 10;
            int unidade = num%10;

            printDezenas(dezena);
            
            if (unidade > 0){
                printf(" E ");
                printUnidades(unidade);
            }
        }
    }
    
    
}

int main(void){
    int num;

    system("cls");

    do {
        printf("DIGITE UM NÚMERO INTEIRO DE 1 A 99:\n => ");
        scanf("%i", &num);
    } while(!(1 <= num && num <= 99));

    printf("%i POR EXTERNO E: ", num);
    conversor(num);
    printf(".\n");

    
    return 0;
}