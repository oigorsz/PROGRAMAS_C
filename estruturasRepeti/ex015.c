#include <stdio.h>
#include <stdlib.h>

int main(){
    int anteantm = 0, ant = 1, atual, n;

    system("cls");

    printf("ENTRE COM O N(apartir do 2): \n => ");
    scanf("%d", &n);

    system("cls");

    printf("0.\n1.\n");


    for(int i = 3; i <=  n; i++){
        atual = anteantm + ant;

        printf("%d.\n", atual);
        anteantm = ant;
        ant = atual;
    }
}