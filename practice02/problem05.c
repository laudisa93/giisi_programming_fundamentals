#include <stdio.h>
/*Escriba un programa que determine si un año es bisiesto. Un año será bisiesto si es múltiplo de 4.
Sin embargo, los años múltiplos de 100 sólo serán bisiestos cuando a la vez sean múltiplos de 400.
(Ejemplo: los años 1984 y 2000 fueron bisiestos, mientras que 1800 no lo fue).*/
void main(){
    int anyo;
    printf("Escriba un año:");
    scanf("%d",&anyo);
    if (anyo%4=0 || anyo%100=0 && anyo%400=0){
        printf("\nEl año %d es bisiesto", anyo);
    }
    else
        printf("\nEl año %d no es bisiesto", anyo);
}
