#include <stdio.h>
/*Escriba un programa que lea dos números enteros (a y b) y muestre a elevado a b.*/
void main(){
    int a,b,i=0,aux;
    printf("Escriba el valor de a: ");
    scanf("%d",&a);
    printf("Escriba el valor de b: ");
    scanf("%d",&b);
    aux=a;
    for(i=1;i<b;i++){
        a=a*aux;
    }
    printf("%d elevado a %d es igual a %d",aux,b,a);
}
