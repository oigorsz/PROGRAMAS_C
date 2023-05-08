#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, maior;

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &n);
    maior = n;

    for(int i = 0; i < 4; i++){
        system("clear");
        printf("DIGITE O PRÓXIMO NÚMERO: \n=> ");
        scanf("%lf", &n);

        if (n > maior){
            maior = n;
        }
    }

    system("clear");
    printf("O MAIOR NÚMERO É %.2lf.\n", maior);
}
