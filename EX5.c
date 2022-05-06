#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float a, b, c;

    printf("Digite o primeiro valor do triangulo:");
    scanf("%f", &a);

    printf("Digite o segundo valor do triangulo:");
    scanf("%f", &b);

    printf("Digite o terceiro valor do triangulo:");
    scanf("%f", &c);

    if(a == b && b == c && c == a){
        printf("Um triangulo equilatero!");
    } else if (a == b || b == c || c == a) {
        printf("Um triangulo isoceles");
    } else if (a != b && b != c && c != a){
        printf("Um triangulo escaleno");
    }
}
