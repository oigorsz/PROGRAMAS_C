#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, n3, n4, med;

    printf("DIGITE A NOTA 1: \n >");
    scanf("%lf", &n1);

    system("cls");

    printf("DIGITE A NOTA 2: \n >");
    scanf("%lf", &n2);

    system("cls");

    printf("DIGITE A NOTA 3: \n >");
    scanf("%lf", &n3);

    system("cls");

    printf("DIGITE A NOTA 4: \n >");
    scanf("%lf", &n4);

    system("cls");

    med = (n1 + n2 + n3 + n4)/4;

    system("cls");

    printf("MEDIA: %.2lf.\n", med);
}