#include <stdio.h>
/*Escriba un programa que determine si un a�o es bisiesto. Un a�o ser� bisiesto si es m�ltiplo de 4.
Sin embargo, los a�os m�ltiplos de 100 s�lo ser�n bisiestos cuando a la vez sean m�ltiplos de 400.
(Ejemplo: los a�os 1984 y 2000 fueron bisiestos, mientras que 1800 no lo fue).*/
void main(){
    int anyo;
    printf("Escriba un a�o:");
    scanf("%d",&anyo);
    if (anyo%4=0 || anyo%100=0 && anyo%400=0){
        printf("\nEl a�o %d es bisiesto", anyo);
    }
    else
        printf("\nEl a�o %d no es bisiesto", anyo);
}
