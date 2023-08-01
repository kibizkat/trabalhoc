#include <stdlib.h>
#include <stdio.h>

int main(){
    int temp[12];
    int mes[12];
    int maior = 0;
    int menor = 100;
    int mesme = 0;
    int mesma = 0;
    
    for(int i = 0; i < 12; i++){
    printf("Digite a temperatura media do mes: \n");
    scanf("%d", &temp[i]);
    mes[i] = i;
        if(maior < temp[i]){
        maior = temp[i];
        mesme = mes[i]+1;
        }
        if(menor > temp[i]){
        menor = temp[i];
        mesma = mes[i]+1;
        }
    }
    
    for(int i = 0; i < 1; i++){
        for(int a = 0; i < 1; i++){
            if(mes[i] == 1){
            printf("1 - Janeiro - %d",temp[i]);}
            if(mes[i] == 2){
            printf("2 - Fevereiro - %d",temp[i]);}
            if(mes[i] == 3){
            printf("3 - Marco - %d",temp[i]);}
            if(mes[i] == 4){
            printf("4 - Abril - %d",temp[i]);}
            if(mes[i] == 5){
            printf("5 - Maio - %d",temp[i]);}
            if(mes[i] == 6){
            printf("6 - Junho - %d",temp[i]);}
            if(mes[i] == 7){
            printf("7 - Julho - %d",temp[i]);}
            if(mes[i] == 8){
            printf("8 - Agosto - %d",temp[i]);}
            if(mes[i] == 9){
            printf("9 - Setembro - %d",temp[i]);}
            if(mes[i] == 10){
            printf("10 - Outubro - %d",temp[i]);}
            if(mes[i] == 11){
            printf("11 - Novembro - %d",temp[i]);}
            if(mes[i] == 12){
            printf("12 - Dezembro - %d",temp[i]);}
        }
    printf("A maior temperatura foi no mes %d com %d graus\n",mesme,maior);
    printf("A menor temperatura foi no mes %d com %d graus",mesma,menor);
    }
}