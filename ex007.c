#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sexo;
    double altura, massa;

    do
    {
        printf("DIGITE 1 PARA MASCULINO\n");
        printf("DIGITE 2 PARA FEMININO\n =>");
        scanf("%d", &sexo);

        if (!(sexo == 1 || sexo == 2)) {
            system("cls");
        }

    } while (!(sexo == 1 || sexo == 2));
    
    
    system("cls");

    printf("DIGITE A SUA ALTURA EM METROS: \n =>");
    scanf("%lf", &altura);

    system("cls");

    if (sexo == 1) {
        massa = (72.7*altura) - 58;
    } 
    
    else if (sexo == 2){
        massa = (62.1*altura) - 44.7;
    }

    printf("ALTURA: %.2lf.\n", altura);
    printf("MASSA IDEAL: %.2f.\n", massa);

}
