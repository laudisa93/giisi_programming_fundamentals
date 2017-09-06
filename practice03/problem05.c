#include <stdio.h>
/*Escribir un programa que calcule el factorial de un número entero positivo leído desde el teclado.
Implemente tres soluciones, una que use la sentencia while, otra que use la sentencia for y otra que
use la sentencia do-while.*/
void main(){
    double num,i,fact=1;
    printf("Escriba un numero: ");
    scanf("%lf",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("El faltorial es %lf",fact);
}
