#include <stdio.h>
/*Escriba un programa que imprima en la pantalla el �rea de un rect�ngulo cuya base y altura sean
le�das desde teclado seg�n el formato del siguiente ejemplo: El �rea de un rect�ngulo de base 2.4
y altura 3.2 es 7.7*/
void main(){
    float b,h,a;
    printf("Escriba la base y la altura del rectangulo:");
    scanf("%f%f", &b,&h);
    a=b*h;
    printf("El �rea de un rect�ngulo de base %.2f y altura %.2f es %.2f", b,h,a);
}
