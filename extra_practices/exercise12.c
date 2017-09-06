#include <stdio.h>
/*Escriba un programa que lea un número entero desde teclado e indique si es par o impar.*/
void main(){
    int x;
    printf("Escriba un numero:");
    scanf("%d",&x);
    if(x%2==0){
        printf("El numero %d es par", x);
    }
    else
        printf("El numero %d es impar", x);
}
