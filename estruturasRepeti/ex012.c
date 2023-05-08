#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    system("cls");

    printf("DIGITE UM NÚMERO DE 1 A 10: \n => ");
    scanf("%d", &num);

    system("cls");

    while (num < 1 || num > 10){
        printf("DIGITE UM VALOR VÁLIDO.\n");
        printf("DIGITE UM NÚMERO DE 1 A 10: \n => ");
        scanf("%d", &num);
        system("cls");
    }

    printf("TABUADA DO %d.\n", num);

    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d.\n", num, i, num*i);
    }
}