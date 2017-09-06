#include<stdio.h>

void f(int);

void main(void){
    int n = 10;

    printf("El valor de n antes de llamar a la funcion es %d\n",n);

    f(n);
    printf("El valor de n despues de llamar a la funcion es %d",n);
}
void f(int n){
    printf("El valor de n a la entrada de la funcion es %d\n",n);

    n = n * 2;

    printf("El valor de n al finalizar la funcion es %d\n",n);
}
