#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int matrix[2][2], i, j, a, b;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    a = matrix[0][0];
    b = matrix[0][1];

    matrix[0][0] = matrix [1][0];
    matrix[0][1] = matrix[1][1];
    matrix[1][0] = a;
    matrix[1][1] = b;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
                printf("%d ", matrix[i][j]);
                }
        printf("\n");
    }
}
