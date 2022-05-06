#include <iostream>
#include <stdlib.h>
#include <string>
#include <new>

using namespace std;

int main(){
    int linhas, colunas, i, j;
    int **matriz;

    cout << "Digite o numero de linhas: ";
    cin >> linhas;

    cout << "Digite o numero de colunas: ";
    cin >> colunas;

    matriz = (int **) new int[linhas];

    for(i=0; i < linhas; i++){
        matriz[i] = (int*) new int[colunas];
    }

    for (i=0; i < linhas; i++){
        for(j=0; j < colunas; j++){
            cout << "Digite o valor na posicao [" << i << "][" << j <<"]";
            cin >> matriz[i][j];
        }
    }

    for(i=0; i< linhas; i++){
        for(j=0; j < colunas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
    free(matriz);
    return 0;
}
