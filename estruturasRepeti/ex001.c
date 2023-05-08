#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    
    do
    {
        printf("DIGITE A NOTA: \n => ");
        scanf("%f", &nota);
        system("cls");

    } while (nota < 0 || nota > 10);
    
    
    printf("NOTA: %.2f.", nota);
}

