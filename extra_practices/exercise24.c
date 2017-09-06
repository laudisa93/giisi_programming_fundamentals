#include <stdio.h>
/*Escriba un programa que solicite el peso de patatas que se quiere comprar y calcule y muestre el
coste de la compra, teniendo en cuenta que el precio por kilo varía en función del número de kilos que
se compran según la tabla adjunta. Ejemplo: Si alguien compra 27 kilos pagará 20€ por los 10 primeros
kilos más 17*1.90 = 32.3€ por los restantes 17.
Número de Kilos     Precio/Kg
Hasta 10            2€
Entre 10 y 50       1,90€
A partir de 50      1,80€*/
void main(){
    float k, precio;
    printf("Escriba el numero de kilos:\n");
    scanf("%f",&k);
    if(k<10){
        precio=k*2;
    }
    else if(k<50){
        precio=20+(k-10)*1.9;
    }
    else{
        precio=20+40*1.9+(k-50)*1.8;
    }
    printf("El precio es %.2f", precio);
}
