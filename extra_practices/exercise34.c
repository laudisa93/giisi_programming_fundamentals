#include <stdio.h>
/*Escriba un programa que lea un n�mero entero y muestre en la pantalla si es primo. Un n�mero es primo si s�lo es
divisible por 1 y por �l mismo. Ejemplo: 19 es primo porque s�lo es divisible por 1 y por 19.*/
void main(){
    int num,primo=0,i=2;
    printf("Escriba un numero entero: ");
    scanf("%d",&num);
    while(!primo && i<num){
        if(num%i==0){
            primo=1;
        }else
        i++;
    }
    if(primo){
        printf("El numero no es primo");
    }else
        printf("El numero es primo");
}
