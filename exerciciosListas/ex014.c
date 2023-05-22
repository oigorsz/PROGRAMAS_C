#include <stdio.h>
#include <stdlib.h>

int main(){
    int respostas[5], sim = 0;
    char perguntas[5][100] = {
        "Telefonou para a vitima ?",
        "Esteve no local do crime?",
        "Mora perto da vítima?",
        "Devia para a vítima?",
        "Já trabalhou com a vítima?"
    };

    system("cls");

    printf("DIGITE 1 PARA SIM.\n");
    printf("DIGITE 0 PARA NAO.\n");

    for(int i = 0; i < 5; i++){
        printf("%s\n => ", perguntas[i]);
        scanf("%i", &respostas[i]);
        if (respostas[i] == 1){
            sim += 1;
        }
    }

    system("cls");

    if (sim == 2){
        printf("SUSPEITO.\n");
        return 0;
    }

    if(3 <= sim && sim <= 4){
        printf("CÚMPLICE.\n");
        return 0;
    }

    if(sim == 5){
        printf("ASSASINO.\n");
        return 0;
    }

    printf("INOCENTE.\n");
}