#include <stdio.h>
#include <stdlib.h>

void printNum(int num){
    for(int i = 0; i < num; i++){
        for(int j = 0; j < i + 1; j++){
            printf("%d ", j + 1);
        }
        printf("\n");
    }

}

int main (void){
    int num;

    system("cls");

    printf("DIGITE UM NUMERO: \n => ");
    scanf("%d", &num);

    system("cls");

    printNum(num);


    return 0;
}