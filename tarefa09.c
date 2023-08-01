#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo;

        printf("Digite o codigo de origem: \n");
        scanf("%d", &codigo);

            if(codigo == 1){
            printf("A procedencia e do Norte");}
            else if(codigo == 2){
            printf("A procedencia e do nordeste");}
            else if(codigo == 3){
            printf("A procedencia e do Sudeste");}
            else if(codigo == 4){
            printf("A procedencia e do Sul");}
            else if(codigo == 5){
            printf("A procedencia e do Centro-Oeste");}
            else
            printf("Este codigo nao esta cadastrado ou nao existe");
}