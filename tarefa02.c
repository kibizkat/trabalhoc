#include <stdlib.h>
#include <stdio.h>

int main(){
    float salario;
    float aumento;
    float nsalario;

        printf("Digite seu salario atual: \n");
        scanf("%f", &salario);
        printf("Digite quantos porcento voce recebera de aumento: \n");
        scanf("%f", &aumento);
        
        nsalario = salario + (salario*(aumento/100));

            printf("Seu novo salario sera de R$%.2f",nsalario);
}