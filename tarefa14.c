#include <stdlib.h>
#include <stdio.h>

int main(){
    int n [9];
    int p [9];
    printf("Digite 9 valores: \n");

    for(int i = 0; i < 9; i++){
        scanf("%d", &n[i]);
        p[i] = i;
    }

    for(int i = 0; i < 9; i++){
        if(n[i] % 2 == 0){
        printf("\n%d  %d\n",n[i],p[i]);} 
    }
}