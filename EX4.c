#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    float a, b, c, d;

    printf("Informe a nota 1:");
    scanf("%f", &a);

    printf("\nInforme a nota 2:");
    scanf("%f", &b);

    printf("\nInforme a nota 3:");
    scanf("%f", &c);

    d = (a+b+c)/3;

    printf("\nNota final:%.2f", d);

    if(d >= 7){
        printf("\nAluno aprovado!");
    }else{
        printf("\nAluno reprovado...");
    }
}
