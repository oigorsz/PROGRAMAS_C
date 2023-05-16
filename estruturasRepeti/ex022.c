#include <stdio.h>
#include <stdlib.h>

int main (){
    int number, primo = 1;

    system("cls");
    
    printf("DIGITE UM NÚMERO INTEIRO E POSITIVO: \n => ");
    scanf("%d", &number);

    system("cls");

    if (number < 0){
        printf("VALOR INVÁLIDO.\n");
        return 0;
    }

    for(int i = 2; i <= number/2; i++){
        if (number%i == 0){
            primo = 0;
            printf("%d É DIVISÍVEL POR %d.\n", number, i);
        }
    }

    if (primo == 1){
        printf("%d É PRIMO.\n", number);
        return 0;
    }

    printf("%d NÃO É PRIMO.\n", number);
}