#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a, b, c, d;

    printf("Digite o valor de a, b e c:");
    scanf("%d %d %d", &a, &b, &c);

    d = a*b*c;
    printf("\nO valor de a*b*c = %d", d);
}
