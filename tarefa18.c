#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    
    int sec = time(0);
    srand(sec);
    int ra [7];
    int nota [21];
    int notaf [7];
    int exame = 60;
    int maior = 0;
    int maiorra = 0;

    for(int i = 0; i < 7; i++){
    ra[i] = rand() % 99999999;
    }
    for(int i = 0; i < 21; i++){
    nota[i] = rand() % 100;
        if(maior < nota[i]){
        maiorra = ra[i];
        }
    }
    for(int i = 0; i < 3; i++){
    notaf[i] = nota[i]+nota[i]+nota[i];
        if(notaf[i] < 70){
        exame = notaf[i] + exame / 2;
        printf("O aluno do RA %d, devera tirar %d no exame\n",ra[i],exame);
        }
    }
    printf("\nA maior media foi do aluno com RA %d",maiorra);
    
}