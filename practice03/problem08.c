#include <stdio.h>
/*Escribir un programa completo en C para:
    Los números de Fibonacci son los miembros de una interesante secuencia en la que cada número
    es igual a la suma de los dos números anteriores. En otras palabras, Fi=Fi-1+Fi-2
    en donde F, es el i-ésimo número de Fibonacci. Los dos primeros números de Fibonacci son,
    por definición, iguales al, es decir: F1=F2=1.
    Por tanto,
    F3=F2+F1=1+1=2
    F4=F3+F2=2+l=3
    F5=F4+F3=3+2=5
    y así sucesivamente.
    Escribir un programa en C que determine los n primeros números de Fibonacci. Comprobar
    el programa con n = 7, n = 10, n = 17 y n = 23.*/
void main(){
    int num=0;
    printf("Escriba un numero entero: ");
    scanf("%d",&num);

    int i=0,ant=1,act=1;

    for(i=0;i<=num;i++){
        printf("%d ",ant+act);
        ant=act;
        act=ant+act;
    }
}
