#include <stdio.h>
/*Escriba un programa que lea un valor entero positivo y determine si el entero es un número primo.
El programa se debe ejecutar repetidamente hasta que se introduzca como valor de entrada un cero.*/
void main(){
    int num,encontrado=0;
    int i=2;
    printf("\nEscriba un numero entero positivo:");
    scanf ("%d", &num);
        while(num!=0){
            encontrado=0;
            for(i=2;i<=num/2;i++){
                if((num%i)==0){
                    encontrado=1;
                }
            }
        if (!encontrado){
            printf("\nEl numero %d es primo",num);
        }
        printf("\nEscriba un numero entero positivo:");
        scanf ("%d", &num);
    }
}
