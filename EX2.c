#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

float a, b, c;

printf("Digite o valor de a:");
scanf("%f", &a);

printf("Digite o valor de b:");
scanf("%f", &b);

c = a-b;
printf("O valor absoluto da diferença entre a e b = %d", abs(c));
}
