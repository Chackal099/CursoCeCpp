#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    int a = 2;

    if(a == 5){
        printf("A variavel a = 5");
    } else if(a == 1){
    printf("A variavel a = 1");
    } else {
    printf("A variavel a = %d", a);
    }
}
