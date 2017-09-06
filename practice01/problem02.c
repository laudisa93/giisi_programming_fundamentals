#include <stdio.h>
/*Programa que convierta un numero dado de segundos en el equivalente de minutos y segundos*/

    void main (){
    int seg, min, seg2;
    printf("Introduzca unos segundos:\n");
    scanf("%d", &seg);
    min= seg/60;
    seg2= seg%60/*seg - 60*min*/;
    printf("%d - %d",min,seg2);
    }
