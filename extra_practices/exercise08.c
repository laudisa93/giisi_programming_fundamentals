#include <stdio.h>
/*Escriba un programa que imprima en la pantalla la edad de una persona cuyo año de nacimiento es
leído por el teclado. Defina el año actual como una constante*/
#define ANYOACTUAL 2011
void main(){
    int anyo,edad;
    printf("Escriba su año de nacimiento:");
    scanf("%d",&anyo);
    edad=ANYOACTUAL-anyo;
    printf("La edad del individuo es: %d",edad);
}
