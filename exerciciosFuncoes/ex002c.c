#include <stdio.h>
#include <stdlib.h>

void printNum(int num){
    for(int i = num; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("%d", j);
        }

        printf("\n");
    }
}


int main(void){ 
    int num;

    system("cls");

    printf("DIGITE UM NUMERO: \n => ");
    scanf("%d", &num);

    system("cls");

    printNum(num);

    return 0;
}