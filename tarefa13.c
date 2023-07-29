#include <stdlib.h>
#include <stdio.h>

int main(){
    float carro;

    printf("Digite o valor do veiculo a ser comprado: \n");
    scanf("%f", &carro);

        float avista = carro - (carro * 0.05);
        float p12 = carro + (carro * 0.06);
        float pa12 = p12 / 12;
        float p24 = carro + (carro * 0.12);
        float pa24 = p24/24;
        float p48 = carro + (carro * 0.24);
        float pa48 = p48/48;
        float p60 = carro + (carro * 0.30);
        float pa60 = p60/60;

            printf("Seu veiculo podera ser comprado nas seguintes condicoes: \nA vista: R$%.2f\nEm 12x parcelas de: %.2f dando valor total de: R$%.2f\nEm 24x parcelas de: %.2f dando valor total de: R$%.2f\nEm 48x parcelas de: %.2f dando valor total de: R$%.2f\nEm 60x parcelas de: %.2f dando valor total de: R$%.2f",avista,pa12,p12,pa24,p24,pa48,p48,pa60,p60);
}