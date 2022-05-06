#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas, i, j;
    int **matriz;

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    printf("\nDigite o numero de linhas: ");
    scanf("%d", &linhas);

    matriz = (int**)malloc(linhas * sizeof(int*));

    for(i=0; i<linhas; i++){
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("\nDigite o valor na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}
