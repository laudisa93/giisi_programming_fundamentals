#include <stdio.h>
#define PI 3.14159;
void main() {
/*Calcule el area y longitud de un circulo*/
    float r;
    float area, lon;
    printf("\nEscriba el radio del círculo: ");
    scanf("%f", &r);
    area= r*r*PI;
    printf("\nEl área de un círculo vale: %f", area);
    lon= 2*r*PI;
    printf("\nLa longitud del círculo vale: %.2f", lon);
}
