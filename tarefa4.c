#include <stdlib.h>
#include <stdio.h>

int main(){
    float racao;
    float peso;
    float total;

        printf("Digite quantos kilos de racao voce comprou: \n");
        scanf("%f", &racao);
        printf("Digite quantas gramas se da aos gatos: \n");
        scanf("%f", &peso);

            total = (racao*1000)-(peso*3);
            total = total /1000;

                printf("Restou no saco apos 3 dias %.2f kilos", total);
}