#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "");

    //int i; //for
    int i = 10; //do while e somente while

    /*do{
        printf("%d\n", i);
        i--;
    } while (i>=0);
    */
    while (i>=0){
        printf("%d\n", i);
        i--;
    }

    /*for (i = 10; i >=0; i--){
        printf("%d\n", i);
    }
    */
    system("pause");
}
