#include <stdio.h>
#include <stdlib.h>

int main(){
    double num, soma, med;

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num);
    soma = num;
    system("clear");
    
    for(int i = 0; i < 4; i++){
        printf("DIGITE OUTRO NÚMERO: \n => ");
        scanf("%lf", &num);
        soma += num;
        system("clear");
    }
    med = (soma)/5;

    printf("SOMA: %.2lf.\n", soma);
    printf("MEDIA: %.2lf.\n", med);


}