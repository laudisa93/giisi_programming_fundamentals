#include <stdio.h>
/*Escriba un programa que lea un n�mero real y muestre los siguientes resultados:
1. El cuadrado del n�mero si el n�mero es menor que 50
2. El cubo del n�mero si est� en el intervalo [70,80] � [90,100]
3. El n�mero le�do en caso contrario.*/
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
