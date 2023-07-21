#include <stdio.h>
#include <string.h>


int main(void){
    char str1[100];
    char str2[100];
    int res = 1;


    printf("DIGITE A STRING 1:\n => ");
    fgets(str1, sizeof(str1), stdin);

    printf("DIGITE A STRING 2:\n => ");
    fgets(str2, sizeof(str2), stdin);


    for(int i = 0, j = strlen(str2) - 2; i < strlen(str1), j >= 0 ; i++, j--){
        if(str1[i] != str2[j]){
            res = 0;
        }
    }

    if(res == 0){
        printf("NAO É PALINDROMO.\n");
    } else {
        printf("E PALINDROMO.\n");
    }

    return 0;
}