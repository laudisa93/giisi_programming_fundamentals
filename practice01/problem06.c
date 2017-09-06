#include <stdio.h>
/*programa que exprese cierta cantidad de pesetas en billetes y monedas de curso legal.*/
void main(){
    float pesetas, euros;
    printf("Escriba la cantidad de dinero en pesetas: \n");
    scanf("%f", &pesetas);
    euros=166.386*pesetas;
    printf("El valor en euros es: %f", euros);
}
