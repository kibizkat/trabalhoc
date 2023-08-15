#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[100];

    printf("Insira a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    int comprimento = strlen(palavra) -1;
    int palindromo = 1;

    for(int i = 0; i < comprimento; i++){
        if(palavra[i] != palavra[comprimento-1-i]){
            palindromo = 0;
            break;
        }else{break;}
    }
    if(palindromo == 1){
        printf("Esta palavra e palindromo\n");
    }else{
        printf("Esta palavra nao e palindromo\n");
    }
    return 0;
}