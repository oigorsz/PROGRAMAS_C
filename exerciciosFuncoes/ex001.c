#include <stdio.h>
#include <stdlib.h>

void conversor(int number){
    for(int i = 0; i < number; i++){
        for(int j = 0; j < i + 1; j++){
            printf("%d ", i + 1);
        }
        printf("\n");
    }
}

int main(void){
    int number;

    system("cls");

    printf("DIGITE UM NUMERO INTEIRO: \n => ");
    scanf("%d", &number);

    system("cls");

    conversor(number);


    return 0;
}