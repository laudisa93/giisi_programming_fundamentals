#include <stdio.h>
/*Escriba un programa que imprima en la pantalla la edad de una persona cuyo a�o de nacimiento es
le�do por el teclado. Defina el a�o actual como una constante*/
#define ANYOACTUAL 2011
void main(){
    int anyo,edad;
    printf("Escriba su a�o de nacimiento:");
    scanf("%d",&anyo);
    edad=ANYOACTUAL-anyo;
    printf("La edad del individuo es: %d",edad);
}
