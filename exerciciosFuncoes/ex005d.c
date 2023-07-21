#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificar(char string[], int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }

    if (string[inicio] == string[fim]) {
        return verificar(string, inicio + 1, fim - 1);
    } else {
        return 0;
    }
}

int main(void) {
    char string[100];

    system("cls");

    printf("DIGITE UMA STRING:\n => ");
    fgets(string, sizeof(string), stdin);

    system("cls");

    // Remover o caractere de nova linha
    string[strcspn(string, "\n")] = '\0';

    int tamanho = strlen(string);
    int resultado = verificar(string, 0, tamanho - 1);

    if (resultado == 1) {
        printf("%s is a palindrome\n", string);
        return 0;
    }

    printf("%s is not a palindrome\n", string);

    return 0;
}
