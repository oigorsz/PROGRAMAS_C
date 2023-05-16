#include <stdio.h>
#include <stdlib.h>

int main(){
    int number = 1, fatorial = 1;

    system("cls");

    while (0 <= number && number < 16){
        printf("DIGITE UM NÚMERO INTEIRO POSITIVO MENOR QUE 16: \n => ");
        scanf("%d", &number);

        if (!(0 <= number && number < 16)){
            continue;
        }

        printf("%d! =", number);


        for(int i = number; i >= 2; i--){
          printf(" %d X", i);
         fatorial *= i;
        }

         printf(" 1.\n");
         printf("%d! = %d.\n", number, fatorial);

         fatorial = 1;
    }

    printf("PROGRAMA FINALIZADO.\n");

    
}