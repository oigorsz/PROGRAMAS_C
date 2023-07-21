#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int ganhou = false, jogadas = 0, jogador = 1, posicao, linha, coluna;
    char m[3][3] = {
     {'1', '2', '3'},
     {'4', '5', '6'},
     {'7', '8', '9'}
     };

     system("cls");

     for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%c  ", m[i][j]);
        }
        printf("\n");
     }

     while(!ganhou && jogadas < 9){
        printf("JOGADOR %d DIGITE A POSICAO: \n=> ", jogador);
        scanf("%d", &posicao);
        linha = (posicao - 1)/3;
        coluna = (posicao - 1)%3;

        if(m[linha][coluna] == 'X' || m[linha][coluna] == 'O' || 0 < posicao || posicao > 9 ){
            jogadas--;
            continue;
        }

        if(jogador == 1){
            m[linha][coluna] = 'X';
        }
        else {
            m[linha][coluna] = 'O';
        }

        if (m[0][0] == m[0][1] && m[0][1] == m[0][2]){
            ganhou = true;
            continue;
        }
        if (m[1][0] == m[1][1] && m[1][1] == m[1][2]){
            ganhou = true;
            continue;
        }
        if (m[2][0] == m[2][1] && m[2][1] == m[2][2]){
            ganhou = true;
            continue;
        }
        
        if (m[0][0] == m[1][0] && m[1][0] == m[2][0]){
            ganhou = true;
            continue;
        }
        if (m[0][1] == m[1][1] && m[1][1] == m[2][1]){
            ganhou = true;
            continue;
        }
        if (m[0][2] == m[1][2] && m[1][2] == m[2][2]){
            ganhou = true;
            continue;
        }

        if (m[0][0] == m[1][1] && m[1][1] == m[2][2]){
            ganhou = true;
            continue;
        }
        if (m[0][2] == m[1][1] && m[1][1] == m[2][0]){
            ganhou = true;
            continue;
        }

        if(jogador == 1){
            jogador = 2;
        } else {
            jogador = 1;
        }

        system("cls");
    
        for(int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                printf("%c ", m[i][j]);
            }
            printf("\n");
        }
        jogadas++;
     }

     if(jogadas >= 9){
        printf("DEU VELHA.\n");
        return 0;
     }

     system("cls");
     for(int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                printf("%c ", m[i][j]);
            }
            printf("\n");
            }

     printf("VENCEDOR É JOGADOR %d.\n", jogador);
       
}