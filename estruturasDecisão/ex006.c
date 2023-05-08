#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3;

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num1);

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num2);

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num3);

    system("cls");


    if (num1 == num2 && num1 == num3 && num2 == num3){
        printf("TODOS OS NÚMEROS SÃO IGUAIS.\n");
        return 0;
    }
    if (num1 > num2 && num1 > num3){
        printf("O MAIOR NÚMERO É: %.2lf.\n", num1);
        return 0;
    }
    if (num2 > num1 && num2 > num3){
        printf("O MAIOR NÚMERO É: %.2lf.\n", num2);
        return 0;
    }
    
    printf("O MAIOR NÚMERO É: %.2lf.\n", num3);

}
