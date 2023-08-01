#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int dado[20];
    int l1 = 0;
    int l2 = 0;
    int l3 = 0;
    int l4 = 0;
    int l5 = 0;
    int l6 = 0;
    int sec = time(0);
    srand(sec);

    for(int i = 0; i < 20; i++){
    dado[i] = rand() % 7;
        if(dado[i] == 0){
        dado[i] = dado[i] +1;
        }
        else if(dado[i] == 1){
        l1++;
        }
        else if(dado[i] == 2){
        l2++;
        }
        else if(dado[i] == 3){
        l3++;
        }
        else if(dado[i] == 4){
        l4++;
        }
        else if(dado[i] == 5){
        l5++;
        }
        else if(dado[i] == 6){
        l6++;
        }
    }

    for(int i = 0; i < 20; i++){
    printf("%d\n",dado[i]);
    }
    for(int i = 0; i < 1; i++){
    printf("a frequencia do lado 1 e de: %d \n",l1);
    printf("a frequencia do lado 2 e de: %d \n",l2);
    printf("a frequencia do lado 3 e de: %d \n",l3);
    printf("a frequencia do lado 4 e de: %d \n",l4);
    printf("a frequencia do lado 5 e de: %d \n",l5);
    printf("a frequencia do lado 6 e de: %d ",l6);
    }
}
