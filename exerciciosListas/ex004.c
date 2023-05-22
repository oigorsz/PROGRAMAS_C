#include <stdio.h>
#include <stdlib.h>

int main(){
    char caracteres [10];
    int i, consoantes = 0;
    int ehVogal = (caracteres[i] == 'A' ||
    caracteres[i] == 'E' ||
    caracteres[i] == 'I' ||
    caracteres[i] == 'O' ||
    caracteres[i] == 'U' ||
    caracteres[i] == 'a' ||
    caracteres[i] == 'e' ||
    caracteres[i] == 'i' ||
    caracteres[i] == 'o' ||
    caracteres[i] == 'u'); 

    printf("DIGITE 10 LETRAS\n");

    for(i = 0; i < 10; i++){
        printf("DIGITE A LETRA %i: \n =>", i + 1);
        scanf("%c", &caracteres[i]);
        if (!ehVogal){
            consoantes += 1;
        }
        
    }

    system("cls");

    printf("HA %i CONSOANTES.\n", consoantes);

}