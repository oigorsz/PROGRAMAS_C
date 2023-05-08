#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double a, b, c, delta, raiz1, raiz2;

    printf("DIGITE VALORES REFERENTES A EXPRESSÃO ax2 + bx +c.\n");

    printf("DIGITE O VALOR DE \"a\".\n");
    scanf("%lf", &a);

    if (a == 0){
        printf("NÃO É FUNÇÃO DO SEGUNDO GRAU.\n");
        return 0;
    }

    printf("DIGITE O VALOR DE \"b\".\n");
    scanf("%lf", &b);

    printf("DIGITE O VALOR DE \"c\".\n");
    scanf("%lf", &c);

    system("cls");

    delta = pow(b, 2) - 4*a*c;

    printf("DELTA: %.2lf.\n", delta);

    if (delta < 0){
        printf("DELTA MENOR QUE ZERO, LOGO NÃO HÁ RAÍZES REAIS.\n");
        return 0;
    }

    raiz1 = (-b + sqrt(delta))/2*a;
    raiz2 = (-b - sqrt(delta))/2*a;

    if (delta == 0){
        printf("DELTA IGUAL A ZERO, LOGO HÁ APENAS UMA RAIZ REAL.\n");
        printf("RAÍZ: %.2lf.\n", raiz1);
        return 0;
    }

    printf("DELTA MAIOR QUE ZERO, LOGO HÁ DUAS RAÍZES REAIS.\n");
    printf("RAÍZ 1: %.2lf.\n", raiz1);
    printf("RAÍZ 2: %.2lf.\n", raiz2);

    return 0;
}
