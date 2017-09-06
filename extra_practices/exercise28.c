#include <stdio.h>
/*Escriba un programa que lea un número real y muestre los siguientes resultados:
1. El cuadrado del número si el número es menor que 50
2. El cubo del número si está en el intervalo [70,80] ó [90,100]
3. El número leído en caso contrario.*/
void main(){
    int x,y;
    printf("Introduzca un numero:");
    scanf("%d",&x);
    if (x<50){
        y=x*x;
        printf("%d",y);
    }
    else if((x>=70 && x<=80) || (x>=90 && x<=100)){
        y=x*x*x;
        printf("%d",y);
    }
    else
        printf("%d",x);
}
