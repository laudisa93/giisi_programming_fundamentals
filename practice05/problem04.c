#include <stdio.h>
/*Escribir una funcion Redondeo que acepte un valor real Cantidad y un valor entero Decimales y devuelva el valor
Cantidad redondeado al numero especificado en Decimales. Por ejemplo, Redondeo(20.563,2) devuelve 20.56*/

float Redondeo (float Cantidad, int Decimales);

void main(){
    float Cantidad,resultado;
    int Decimales;
    printf("Introduzca la cantidad: ");
    scanf("%f",&Cantidad);
    printf("Introduzca el numero de decimales: ");
    scanf("%d",&Decimales);

    resultado=Redondeo(Cantidad,Decimales);
    printf("Redondeo (%f), decimales %d -> %f",Cantidad,Decimales,resultado);
}

float Redondeo (float Cantidad, int Decimales){
    float comparador;
    for(i=0;i<Decimales;i++){
        Cantidad=Cantidad*10;
    }
    while(Cantidad==Cantidad){
        Cantidad++;
        contador++;

    }



}
