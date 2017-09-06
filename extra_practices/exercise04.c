#include <stdio.h>
/*Implementar un programa que lea desde teclado los datos de un deportista y los imprima en la
pantalla con el formato del siguiente ejemplo: El dorsal número 1234 mide 1,82cm y pesa 72,5kg*/
void main (){
    int num;
    float alt,peso;
    printf("Introduzca los datos del deportista, numero de dorsal, altura y peso:");
    scanf("%d%f%f", &num, &alt,&peso);
    printf("El dorsal número %d mide %.2f cm y pesa %.2f kg", num,alt,peso);
}
