#include <stdio.h>

int main(){
    int n = 1;
    for(int i = 0; i < 25; i++){
        printf("%i.\n", n);
        n = n + 2;
    }
}