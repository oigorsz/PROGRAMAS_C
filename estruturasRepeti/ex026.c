#include <stdio.h>
#include <stdlib.h>

int main(){
    int eleitores, voto, votoPedro = 0, votoTiago = 0, votoNicolau = 0, votoBranco = 0, votoNulo = 0;

    system("cls");

    printf("DIGITE QUANTOS ELEITORES IRÃO VOTAR: \n => ");
    scanf("%i", &eleitores);

    system("cls");

    for(int i = 1; i <= eleitores; i++){
        printf("DIGITE 1 PARA VOTAR EM PEDRO.\n");
        printf("DIGITE 2 PARA VOTAR EM TIAGO.\n");
        printf("DIGITE 3 PARA VOTAR EM NICOLAU.\n");
        printf("DIGITE 4 PARA VOTAR EM BRANCO.\n");
        scanf("%i", &voto);

        if(voto != 1 && voto != 2 && voto != 3 && voto !=4 ){
            votoNulo += 1;
        }

        if (voto == 1){
            votoPedro += 1;
        }
        if (voto == 2){
            votoTiago += 1;
        }
        if (voto == 3){
            votoNicolau += 1;
        }
        if (voto == 4){
            votoBranco += 1;
        }

        system("cls");
    }

    printf("PEDRO %i VOTOS.\n", votoPedro);
    printf("TIAGO %i VOTOS.\n", votoTiago);
    printf("NICOLAU %i VOTOS.\n", votoNicolau);
    printf("BRANCOS %i VOTOS.\n", votoBranco);
    printf("VOTOS NULOS %i.\n", votoNulo);
}