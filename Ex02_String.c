#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char musica[100];
    printf("Nome: da musica: ");
    fgets(musica, sizeof(musica),stdin);
    
    char carac;
    printf("Digite o caractere a ser procurado: ");
    scanf("%c", &carac);

    int encontrado = 0;

    for(int i = 0; i < strlen(musica); i++){
        if(musica[i] == carac){
            printf("O caractere foi encontrado no indice %d.\n",i);
            encontrado = 1;
        }
    }

    if(encontrado == 0){
        printf("O caractere nao foi encontrado na musica.\n");
    }

    return 0;
}