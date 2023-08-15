#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[5][100];

    for(int i = 0; i < 5; i++){
        scanf("%s", nome[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%s\n",nome[i]);
    }

    return 0;
}