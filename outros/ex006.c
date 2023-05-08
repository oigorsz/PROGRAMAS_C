#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.ISO-8859-1");
    double raio, area;

    printf("DIGITE A MEDIDA DO RAIO DA CIRCUNFERÊNCIA (EM METROS): \n >");
    scanf("%lf", &raio);

    system("cls");

    area = M_PI * raio*raio;

    printf("ÁREA DA CIRCUNFERÊNCIA: %.2lf", area);
}