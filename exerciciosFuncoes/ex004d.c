#include <stdio.h>
#include <stdlib.h>

void intersecsao(int A[], int B[], int C[]){
    int tamanhoA = A[0];
    int tamanhoB = B[0];
    int tamanhoC = 0;

    for(int i = 1; i <= tamanhoA; i++){
        for(int j = 1; j <= tamanhoB; j++){
            if(A[i] == B[j]){
                C[tamanhoC++] = A[i];
            }
        }
    }

    for(int i = 0; i < tamanhoC; i++){
        printf(" %d ", C[i]);
    }
}


int main(void){
    int A[] = {5, 1, 2, 3, 4, 5};
    int B[] = {5, 1, 2, 3, 4, 5};
    int C[20];

    intersecsao(A,B,C);
    return 0;
}