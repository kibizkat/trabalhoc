#include <stdlib.h>
#include <stdio.h>

int main(){
    int par[6];
    int contp = 0;
    int conti = 0;

    for(int i = 0; i < 6; i++){
    scanf("%d", &par[i]);
        if(par[i] % 2 == 0){
        contp++;        
        }
        else if(par[i] % 2 != 0){
        conti++;
        }
    }
    for(int i = 0; i < 6; i++){
            if(par[i] % 2 == 0){
            printf("Numeros Pares: %d \n",par[i]);    
            }
    }
    for(int i = 0; i < 6; i++){
            if(par[i] % 2 != 0){
            printf("Numeros Impares: %d \n",par[i]);
            
        }
    }
    printf("Total de Pares: %d\nTotal de Impares: %d",contp,conti);
}