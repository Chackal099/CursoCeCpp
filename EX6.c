#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "");

    float a, b;
    int c;

    printf("Digite 2 valores: ");
    scanf("%f %f", &a, &b);

    printf("\nEscolha a operacao a ser realizada, 1-Soma, 2-Subtracao, 3-Divisao, 4-Multiplicacao: ");
    scanf("%d", &c);

    switch(c){
    case 1:
        printf("Resultado da SOMA de %.2f + %.2f: %.2f", a, b, a+b);
        break;
    case 2:
        printf("Resultado da SUBTRACAO de %.2f - %.2f: %.2f", a, b, a-b);
        break;
    case 3:
        printf("Resultado da DIVISAO de %.2f / %.2f: %.2f", a, b, a/b);
        break;
    case 4:
        printf("Resultado da MULTIPLICACAO de %.2f * %.2f: %.2f", a, b, a*b);
        break;
    default:
        printf("ERRO: Operacao invalida!");
        break;
    }
}
