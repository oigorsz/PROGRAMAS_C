#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;

    system("cls");

    printf("DIGITE UM ANO: \n=> ");
    scanf("%i", &year);

    system("cls");

    if (year%4 == 0 || year%100 == 0 && year%400 == 0){
        printf("%d É BISSEXTO.\n", year);
        return 0;
    }

    printf("%d NÃO É BISSEXTO.\n", year);
    
}