#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void formatarTelefone(char telefoneForm[15]) {
    int tamanho = strlen(telefoneForm);

    if (tamanho == 7) {
        for (int i = tamanho; i >= 0; i--) {
            telefoneForm[i + 1] = telefoneForm[i];
        }
        telefoneForm[0] = '3';
    }

    if (tamanho == 8) {
        for (int i = tamanho; i >= 4; i--) {
            telefoneForm[i + 1] = telefoneForm[i];
        }
        telefoneForm[4] = '-';
    }
}

int main(void) {
    char telefone[15], telefoneForm[15];

    printf("DIGITE O NUMERO DO TELEFONE:\n=> ");
    fgets(telefone, sizeof(telefone), stdin);

    int i, j;
    for (i = 0, j = 0; i < strlen(telefone); i++) {
        if (isdigit(telefone[i])) {
            telefoneForm[j++] = telefone[i];
        }
    }
    telefoneForm[j] = '\0';

    formatarTelefone(telefoneForm);

    printf("Telefone corrigido sem formatação: %s\n", telefoneForm);
    printf("Telefone corrigido com formatação: %.4s-%.4s\n", telefoneForm, telefoneForm + 4);

    return 0;
}
