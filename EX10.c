#include <stdio.h>
#include <stdlib.h>
#define A 3

void main(){
    int vector[A], i;
    float media;

    for(i=0; i < A; i++){
        printf("\nDigite um valor: ");
        scanf("%d", &vector[i]);
        media = media+vector[i];
    }
    media = media/A;
    printf("\nMedia dos %d numeros: %f", A, media);
}
