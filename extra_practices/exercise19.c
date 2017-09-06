#include <stdio.h>
/*Escriba un programa que lea un número desde teclado e indique si está o no está premiado con el
reintegro en el sorteo de la ONCE. Un número consigue el reintegro si su primera o última cifra
coincide con la primera o última cifra del número agraciado en el sorteo el cual será definido
como una constante.*/
#define REINTEGRO 7
void main() {
    int num;
    printf("Introduzca el numero del sorteo:\n");
    scanf("%d",&num);

    if (num/(REINTEGRO*10000)==1 || (num%10==REINTEGRO)){
        printf("El numero %d esta premiado con el reintegro\n", num);
    } else{
        printf("El numero %d no esta premiado con el reintegro\n", num);
    }
}
