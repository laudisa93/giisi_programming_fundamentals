#include <stdio.h>
/*Escriba un programa que lea números desde el teclado hasta que haya leído tres números pares.*/
void main(){
    int num,contador=0;
    do{
        printf("\nEscriba un numero entero: ");
        scanf("%d",&num);
        if(num%2==0){
            contador++;
        }
    }while(contador!=3);
    printf("\nYa se han introducido tres numeros pares.");
}
