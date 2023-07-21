#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 100

struct informations {
    char nome[TAM];
    int idade;
    double salario;
    char sexo[TAM];
};

typedef struct informations informations;

int main(void) {
    int numRes;

    system("cls");

    printf("DIGITE O NUMERO DE REGISTROS A SEREM FEITOS: \n=> ");
    scanf("%d", &numRes);

    informations pessoa[numRes];

    for (int i = 0; i < numRes; i++) {
        system("cls");
        getchar();
        char letra;

        printf("DIGITE O NOME DA PESSOA %d: \n => ", i + 1);
        fgets(pessoa[i].nome, TAM, stdin);
        pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';

        for (int j = 0; j < strlen(pessoa[i].nome); j++) {
            pessoa[i].nome[j] = toupper(pessoa[i].nome[j]);
        }

        system("cls");

        do {
            printf("DIGITE A IDADE DA PESSOA %d: \n=> ", i + 1);
            scanf("%d", &pessoa[i].idade);
        } while (!(1 <= pessoa[i].idade && pessoa[i].idade <= 100));

        system("cls");

        do {
            printf("DIGITE O SALARIO EM REAIS DA PESSOA %d: \n=> ", i + 1);
            scanf("%lf", &pessoa[i].salario);
        } while (!(pessoa[i].salario >= 0));

        system("cls");

        int valido = 0;
        getchar();

        do {
            printf("DIGITE M PARA MASCULINO\nDIGITE F PARA FEMININO\n");
            printf("QUAL O SEXO DA PESSOA %d:\n => ", i + 1);
            scanf("%c", &letra);

            if (letra == 'M' || letra == 'm') {
                strcpy(pessoa[i].sexo, "MASCULINO");
                valido = 1;
            }
            if (letra == 'F' || letra == 'f') {
                strcpy(pessoa[i].sexo, "FEMININO");
                valido = 1;
            }

            letra = ' ';

            system("cls");
        } while (valido != 1);
    }

    for (int i = 0; i < numRes; i++) {
        printf("NOME: %s --- IDADE: %d --- SALARIO: R$%.2lf --- SEXO: %s\n", pessoa[i].nome,
               pessoa[i].idade, pessoa[i].salario, pessoa[i].sexo);
    }

    return 0;
}
