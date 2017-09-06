#include <stdio.h>
#define PI 3.14159
/*Escriba varias funciones para calcular datos de una circunferencia en función de su radio, siendo éstos:
• Diámetro de la circunferencia. 2*r
• Longitud de la circunferencia. 2*pi*r
• Superficie de la circunferencia pi*r^2 */

float diametro(float);
float longitud(float);
float superficie(float);

void main (){
    float radio;
    float diam, lon, sup;
    printf("Escriba el radio:");
    scanf("%f",&radio);

    diam=diametro(radio);
    printf("El diametro es %f\n", diam);
    lon=longitud(radio);
    printf("La longitud es %f\n", lon);
    sup=superficie(radio);
    printf("La superficie es %f\n", sup);
}

float diametro(float radio){
    return radio*2;
}
float longitud(float radio){
    return radio*2*PI;
}
float superficie(float radio){
    return radio*radio*PI;
}
