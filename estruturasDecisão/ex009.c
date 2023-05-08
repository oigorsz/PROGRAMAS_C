#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3, first, second, third;

    printf("DIGITE UM NÚMERO: \n=> ");
    scanf("%lf", &num1);

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num2);

    printf("DIGITE UM NÚMERO: \n => ");
    scanf("%lf", &num3);

    system("cls");

    if (num1 == num2 && num1 == num3 && num2 == num3){
        printf("TODOS OS VALORES SÃO IGUAIS. \n");
        return 0;
    }

    if (num1 < num2 && num1 < num3){
        first = num1;
        if (num2 < num3){
            second = num2;
            third= num3;
        }
        else {
            second = num3;
            third = num2;
        }
    }

    if (num2 < num1 && num2 < num3){
        first = num2;
        if (num1 < num3){
            second = num1;
            third = num3;
        }
        else {
            second = num3;
            third = num1;
        }
    }

    if (num3 < num1 && num3 < num2){
        first = num3;
        if (num1 < num2){
            second = num1;
            third = num2;
        }
        else {
            second = num2;
            third = num1;
        }
    }

    printf("EM ORDEM DECRECENTE: %.2lf ; %.2lf ; %.2lf.\n", third, second, first);
    printf("EM ORDEM CRESCENTE: %.2lf ; %.2lf ; %.2lf.\n", first, second, third);

    return 0;

}
