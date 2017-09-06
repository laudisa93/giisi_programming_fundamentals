#include <stdio.h>
/*En una tienda en rebajas cuando el cliente compra por una cantidad superior a 100 euros se le hace
un descuento del 5%, por una cantidad superior a 200 euros un descuento del 8% y por una cantidad
superior a 300 euros un descuento del 10%. Escriba un programa que lea por el teclado la cantidad en
euros comprada por un usuario e imprima la cantidad a pagar una vez hecho el descuento correspondiente.*/
void main(){
    float precio,total;
    printf("Introduzca el precio:");
    scanf("%f",&precio);
    if (precio>300){
        total=precio*0.9;
        printf("La cantidad a pagar es: %.2f", total);
    }
    else if (precio>200){
        total=precio*0.92;
        printf("La cantidad a pagar es: %.2f", total);
    }
    else if (precio>100){
        total=precio*0.95;
        printf("La cantidad a pagar es: %.2f", total);
    }
    else
        printf("No se le aplica descuento al precio");
}
