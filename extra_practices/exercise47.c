#include <stdio.h>
/*Escriba un programa que lea una secuencia de números positivos por teclado hasta que el usuario introduzca el valor 0 y
muestre por pantalla el mínimo de dicha secuencia.*/
void main(){
    int num, min;
    printf("\nEscriba un numero positivo: ");
    scanf("%d",&num);
    min=num;
    while(num!=0){
        printf("\nEscriba un numero positivo: ");
        scanf("%d",&num);
        if((num<min)&&(num!=0)){
        min=num;
        }
    }
    printf("\nEl minimo es %d",min);
}
