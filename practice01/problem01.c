#include <stdio.h>
#define PI 3.14159;
void main() {
/*Calcule el area y longitud de un circulo*/
    float r;
    float area, lon;
    printf("\nEscriba el radio del c�rculo: ");
    scanf("%f", &r);
    area= r*r*PI;
    printf("\nEl �rea de un c�rculo vale: %f", area);
    lon= 2*r*PI;
    printf("\nLa longitud del c�rculo vale: %.2f", lon);
}
