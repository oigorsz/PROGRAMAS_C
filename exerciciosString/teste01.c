#include <stdio.h>

int main(void) {
    int num;
    
	printf("DIGITE UM NÚMERO INTEIRO: \n => ");
    scanf("%i", &num);

    if(num%2 == 0){
        printf("%d É PAR.\n", num);
        return 0;
    }

    printf("%d É IMPAR.\n", num);

	return 0;
}
