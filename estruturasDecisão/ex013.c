#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;

    system("cls");

    printf("DIGITE UM NÚMERO ENTRE 1 E 7: \n=> ");
    scanf("%d", &number);

    system("cls");

    while(number < 1 || number > 7){
        printf("DIGITE UM VALOR VÁLIDO.\n");
        printf("DIGITE UM NÚMERO ENTRE 1 E 7: \n=> ");
        scanf("%d", &number);

        system("cls");
    }

    printf("%d - ", number);

    if (number == 1){
        printf("DOMINGO.\n");
        return 0;
    }
    if (number == 2){
        printf("SEGUNDA-FEIRA.\n");
        return 0;
    }
    if (number == 3){
        printf("TERÇA-FEIRA.\n");
        return 0;
    }
    if (number == 4){
        printf("QUARTA-FEIRA.\n");
        return 0;
    }
    if (number == 5){
        printf("QUINTA-FEIRA.\n");
        return 0;
    }
    if (number == 6){
        printf("SEXTA-FEIRA.\n");
        return 0;
    }
    if (number == 7){
        printf("SÁBADO.\n");
        return 0;
    }
    
}