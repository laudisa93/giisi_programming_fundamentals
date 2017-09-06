#include <stdio.h>
/*Escriba un programa que lea un n�mero desde teclado e indique si est� o no est� premiado con el
reintegro en el sorteo de la ONCE. Un n�mero consigue el reintegro si su primera o �ltima cifra
coincide con la primera o �ltima cifra del n�mero agraciado en el sorteo el cual ser� definido
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
