#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int idade [10];
    float peso [10];
    float altura [10];
    int media = 0;
    int cont2 = 0;
    int cont2 = 0;

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

                    if ( i == 9 && (peso[i] > 90 && altura[i] > 1.50)){
                    cont = 1 + cont;
                    printf("Contagem de pessoas acima do peso: %d\n", cont);
                    }

                        if (i == 9 && (idade[i] >= 10 && idade[i]< 31) && (altura[i] >= 1.90)){
                        cont2 = 1 + cont2;
                        int porcent = (cont2 / 10)*100;
                        printf("%d porcento de pessoas altas entre 10 e 30 anos\n",porcent);
                        }
            
    }
}
