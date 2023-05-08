#include <stdio.h>
#include <stdlib.h>

int main()
{
    char turno;

    printf("DIGITE M PARA MATUTINO.\n");
    printf("DIGITE V PARA VESPERTINO.\n");
    printf("DIGITE N PARA NOTURNO.\n");
    printf("DIGITE I PARA INTEGRAL.\n");

    printf("EM QUAL TURNO VOCÊ ESTUDA ? \n=> ");
    scanf("%c", &turno);

    system("cls");

    int matutino = (turno == 'M' || turno == 'm');
    int vespertino = (turno == 'V' || turno == 'v');
    int noturno = (turno == 'N' || turno == 'n');
    int integral = (turno == 'I' || turno == 'i');

    if (!(matutino || vespertino || noturno || integral)){
        printf("O VALOR DIGITADO NÃO É VÁLIDO.\n");
        return 0;
    }
    if (matutino){
        printf("BOM DIA ! \n");
        return 0;
    }
    if (vespertino){
        printf("BOA TARDE ! \n");
        return 0;
    }
    if (noturno){
        printf("BOA NOITE ! \n");
        return 0;
    }
    if (integral){
        printf("BOA SORTEKKKKK, GUERREIRO. \n");
        return 0;
    }
}
