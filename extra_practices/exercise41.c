#include <stdio.h>
/*Escriba un programa que lea n�meros desde el teclado hasta que haya le�do tres n�meros pares.*/
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
