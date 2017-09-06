#include <stdio.h>
/*Escriba un programa que lea un número del 1 al 9 por el teclado y muestre su tabla de multiplicar.*/
void main(){
    int num,i=0;
    printf("Introduzca un numero del 1 al 9: ");
    scanf("%d",&num);

    for(i=0;i<10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
}
