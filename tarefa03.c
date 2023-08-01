#include <stdlib.h>
#include <stdio.h>

int main(){
    float pi = 3.14;
    float raio;
    float circulo;
    printf("Digite o valor do raio: \n");
    scanf("%f", &raio);

    circulo = (raio*raio)*pi;

        printf("A area do circulo e de %.2f", circulo);
}