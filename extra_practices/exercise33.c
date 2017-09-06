#include <stdio.h>
/*Programa que lea un numero entero y muestre en la pantalla si es un cuadrado perfecto. Un numero es
perfecto cuando tiene raiz cuadrada entera*/
void main(){
    int n, i=1, encontrado=0;
    printf("Escriba un numero:\n");
    scanf("%d",&n);
    while(!encontrado && i<n){
        if (n==i*i){
            encontrado=1;
        }
        i++;
    }
    if(encontrado)
        printf("El numero %d es perfecto\n", n);
    else
        printf("El numero %d no es perfecto\n", n);
}
