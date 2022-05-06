#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "");

    int i, j, k, l;

    printf("\nDigite um número:");
    scanf("%d", &i);

    j = i/2;

    for(k=2; k<=j; k++){
    if(i%k==0){
        printf("Número não é Primo!");
        l=1;
    }else{
        l=0;
    }
    }
    if (l==0){
        printf("Numero é primo!");
    }
}
