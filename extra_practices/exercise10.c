#include <stdio.h>
/*Escriba un programa que intercambie el valor de dos variables de tipo entero le�das por teclado.
Imprima en la pantalla los valores de las variables antes y despu�s del intercambio.*/
void main(){
    int x,y,aux;
    printf("Escriba el valor de x e y:");
    scanf("%d%d",&x,&y);
    aux=x;
    x=y;
    y=aux;
    printf("x:%d e y:%d",x,y);
}
