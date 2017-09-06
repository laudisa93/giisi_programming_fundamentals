#include <stdio.h>
/*Escriba un programa que lea desde teclado una cantidad en euros e imprima su equivalente en pesetas
con el formato del siguiente ejemplo: 6 euros equivalen a 1000 pesetas. Use una constante para el
factor de conversión de una moneda a otra.*/
#define CONVERSOR 166.38621
void main(){
    float euro, peseta;
    printf("Escriba la cantidad de dinero en euros:");
    scanf("%f", &euro);
    peseta=euro*CONVERSOR;
    printf("%.2f euros equivalen a %.2f pesetas",euro,peseta);
}
