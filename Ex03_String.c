#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[100];
    printf("NDigite uma frase: ");
    fgets(frase, sizeof(frase),stdin);
    
    char voga = 'a';
    char voge = 'e';
    char vogi = 'i';
    char vogo = 'o';
    char vogu = 'u';
    char vogA = 'A';
    char vogE = 'E';
    char vogI = 'I';
    char vogO = 'O';
    char vogU = 'U';
    int cont = 0;

    for(int i = 0; i < strlen(frase); i++){
        if((frase[i] == vogA) || (frase[i] == voga)){
            cont++;
        }
        if((frase[i] == vogE) || (frase[i] == voge)){
            cont++;
        }
        if((frase[i] == vogI) || (frase[i] == vogi)){
            cont++;
        }
        if((frase[i] == vogO) || (frase[i] == vogo)){
            cont++;
        }
        if((frase[i] == vogU) || (frase[i] == vogu)){
            cont++;
        }
    }
    printf("Quantidade de vogais: %d\n",cont);
    return 0;
}