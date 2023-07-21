#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int tamanho1, tamanho2;

    system("cls");

    printf("DIGITE UMA STRING: \n => ");
    fgets(str1, sizeof(str1), stdin);

    printf("DIGITE OUTRA STRING: \n => ");
    fgets(str2, sizeof(str2), stdin);

    tamanho1 = strlen(str1);
    str1[tamanho1 - 1] = '\0';

    tamanho2 = strlen(str2);
    str2[tamanho2 - 1] = '\0';

    system("cls");

    printf("TEXTO 1 DIGITADO: %s.\n", str1);
    printf("TAMANHO DA STRING 1: %i.\n", tamanho1);
    printf("TEXTO 2 DIGITADO: %s.\n", str2);
    printf("TAMANHO DA STRING 2: %i\n", tamanho2);

    if(strcmp(str1, str2) == 0){
        printf("AS DUAS STRINGS SÃO IGUAIS.\n");
    } else {
        printf("AS DUAS STRINGS SÃO DIFERENTES.\n");
    }

    if(tamanho1 == tamanho2){
        printf("AS DUAS STRINGS POSSUEM O MESMO TAMANHO.\n");
    } else{
        printf("AS STRINGS POSSUEM TAMANHO DIFERENTES.\n");
    }


}