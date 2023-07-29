#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float nota1;
    float peso1;
    float nota2;
    float peso2;
    float nota3;
    float peso3;
    float notaf;
        printf("Digite sua primeira nota: \n");
        scanf("%f", &nota1);
        printf("Digite o peso da primeira nota: \n");
        scanf("%f", &peso1);
        printf("Digite sua segunda nota: \n");
        scanf("%f", &nota2);
        printf("Digite o peso da segunda nota: \n");
        scanf("%f", &peso2);
        printf("Digite sua terceira nota: \n");
        scanf("%f", &nota3);
        printf("Digite o peso da terceira nota: \n");
        scanf("%f", &peso3);

            notaf = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);
                printf("A sua media ponderada e de %.1f",notaf);
}