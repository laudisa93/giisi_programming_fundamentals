#include <stdio.h>
void main (){
    int a, b, c, x;
    printf("\nEscriba el valor de a: ");
    scanf("%d", &a);
    printf("\nEscriba el valor de b: ");
    scanf("%d", &b);
    printf("\nEscriba el valor de c: ");
    scanf("%d", &c);
    printf("\nLa ecuación de segundo grado es: %dx^2+%dx+%d", a, b, c);
    x=(-b+-(b*b - 4*a*c)^1/2)/2*a;
    printf("\nEl valor de la x es: %d", x);
}
