#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int idade [10];
    float peso [10];
    float altura [10];
    int media = 0;
    int a = 0;
    int b = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite a sua idade: \n");
        scanf("%d", &idade[i]);
        printf("Digite seu peso: \n");
        scanf("%f", &peso[i]);
        printf("Digite sua altura: \n");
        scanf("%f", &altura[i]);

            media += idade[i];

                if(i == 9 ){
                media = media / 10;
                printf("A idade media e de: %.d anos \n", media);
                }

                    if ((peso[i] > 90 && altura[i] > 150)){
                    a = 1 + a;
                    if(i == 9){
                    printf("Contagem de pessoas acima do peso: %d\n", a);
                    }}

                        if ((idade[i] >= 10 && idade[i]< 31) && (altura[i] >= 190)){
                        b = 1 + b;
                        if(i == 9){
                        float porcent = (b * 100)/10;
                        printf("%.1f porcento de pessoas altas entre 10 e 30 anos\n",porcent);
                        }}
            
    }
}
