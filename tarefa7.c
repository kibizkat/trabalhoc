#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float total;

        printf("Digite a nota do primeiro trimestre: \n");
        scanf("%f", &nota1);
        printf("Digite a nota do segundo trimestre: \n");
        scanf("%f", &nota2);
        printf("Digite a nota do terceiro trimestre: \n");
        scanf("%f", &nota3);

            total = (nota1 + nota2 + nota3)/3;

                if(total >= 0 && total < 3){
                printf("Este aluno esta reprovado!");}
                    if(total >= 3 && total < 7){
                        float notaexame;
                        notaexame = 7 - total;
                        printf("Voce devera fazer o exame, sua media e %.1f, e vc devera tirar ao menos %.1f no exame",total, notaexame);}
                            if(total >= 7 && total <10.01){
                            printf("Este aluno esta Aprovado!");}
    }