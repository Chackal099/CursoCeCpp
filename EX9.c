#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "");

    int i, j, k, l;

    printf("\nDigite um n�mero:");
    scanf("%d", &i);

    j = i/2;

    for(k=2; k<=j; k++){
    if(i%k==0){
        printf("N�mero n�o � Primo!");
        l=1;
    }else{
        l=0;
    }
    }
    if (l==0){
        printf("Numero � primo!");
    }
}
