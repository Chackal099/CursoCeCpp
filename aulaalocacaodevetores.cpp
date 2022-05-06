#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho);

int main (){
    int *vetor, tamanho, i;

    printf("Digite um tamanho para o vetor");
    scanf("%d", &tamanho);

    vetor = alocaVetor(tamanho);
    for(i=0; i<tamanho; i++){
        printf("\nDigite um valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i=0; i<tamanho; i++){
        printf("\nPosicao %d: %d", i, vetor[i]);
    }
    free(vetor);
    return 0;
}

int* alocaVetor (int tamanho){
    int *aux;
    aux = (int *) malloc(tamanho*sizeof(int));
    return aux;
}
