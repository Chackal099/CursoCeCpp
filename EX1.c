#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float a=0, b=0;

    printf("Escreva a nota 1:");
    scanf("\n%f", &a);

    printf("\nEscreva a nota 2:");
    scanf("\n%f", &b);

    printf("\nA media entre as duas notas: %f", (a+b)/2);
}
