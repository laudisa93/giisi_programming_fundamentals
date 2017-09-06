#include <stdio.h>
/*Escriba un programa que imprima en la pantalla el área de un rectángulo cuya base y altura sean
leídas desde teclado según el formato del siguiente ejemplo: El área de un rectángulo de base 2.4
y altura 3.2 es 7.7*/
void main(){
    float b,h,a;
    printf("Escriba la base y la altura del rectangulo:");
    scanf("%f%f", &b,&h);
    a=b*h;
    printf("El área de un rectángulo de base %.2f y altura %.2f es %.2f", b,h,a);
}
