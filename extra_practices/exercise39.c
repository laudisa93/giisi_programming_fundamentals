#include <stdio.h>
/*Escriba un programa que lea una secuencia de n�meros enteros por el teclado hasta que lea el primer n�mero impar
en cuyo caso debe mostrarlo por pantalla y finalizar.*/
void main(){
    int num;
    do{
        printf("\nEscriba un numero entero: ");
        scanf("%d",&num);

    }while(num%2==0);
    printf("\nEl numero impar es %d",num);
}
