#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vogal (char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c =='U';
}

int main(){

    char frase[100];

    printf("Insira a frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(int i = 0; i < strlen(frase); i++){
        if(vogal(frase[i])){
            frase[i] = '*';
        }
    }
    printf("%s\n",frase);
    return 0;
}