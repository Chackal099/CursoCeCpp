#include <iostream>
#include <stdlib.h>
#include <string>
#include <new>

using namespace std;

int main(){
    int tamanho, i;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int *vetor = new int[tamanho];

    for(i=0; i< tamanho; i++){
        cout << "\nDigite o valor na posicao " << i << ": ";
        cin >> vetor[i];
    }

    for (i=0; i < tamanho; i++){
        cout << "\nPosicao " << i << ": " << vetor[i];
    }

    return 0;
}
