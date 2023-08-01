#include <stdlib.h>
#include <stdio.h>

int main(){
    float cache;
    float ingresso;
    float venda;

        printf("Digite o valor do cache pago: \n");
        scanf("%f", &cache);
        printf("Digite o valor de venda do ingresso: \n");
        scanf("%f", &ingresso);
        
            venda = cache / ingresso;

                printf("Devera ser vendido ao menos %.0f ingresso", venda);
}