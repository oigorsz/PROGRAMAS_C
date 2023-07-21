#include <stdio.h>

int main(void) {
    int num, soma = 0;

	printf("DIGITE UM NÚMERO INTEIRO: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        if(i%3 == 0){
            soma += i;
        }

        if(i%5 == 0){
            soma+= i;
        }
    }

    printf("%d", soma);

	return 0;
}
