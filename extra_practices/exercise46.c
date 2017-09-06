#include <stdio.h>
/*Escriba un programa que lea una secuencia de números positivos por teclado hasta que el usuario introduzca el
valor 0 y muestre por pantalla el máximo de dicha secuencia.*/
void main(){
    int num, max;
    printf("\nEscriba un numero positivo: ");
    scanf("%d",&num);
    max=num;
    while(num!=0){
        printf("\nEscriba un numero positivo: ");
        scanf("%d",&num);
        if(num>max){
        max=num;
        }
    }
    printf("\nEl maximo es %d",max);
}
