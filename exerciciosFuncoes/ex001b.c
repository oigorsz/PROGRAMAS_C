#include <stdio.h>
#include <stdlib.h>

void print(int num){
    for(int i = 1; i <= num; i++){
        for(int j = 0; j < i ; j++){
            printf("%d", i);
        }
        printf("\n");
    }
}

int main(void){
    int num;

    system("cls");


    printf("DIGITE UM NUMERO: \n=> ");
    scanf("%d", &num);

    system("cls");

    print(num);

    return 0;
}