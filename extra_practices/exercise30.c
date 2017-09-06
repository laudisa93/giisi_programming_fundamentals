#include <stdio.h>
/*Escriba un programa que lea desde el teclado tres caracteres e imprima en la pantalla si existen
al menos dos caracteres iguales.*/
void main(){
    char x,y,z;
    printf("Escriba un caracter:\n");
    fflush(stdin);
    scanf("%c",&x);
    fflush(stdin);
    printf("Escriba un caracter:\n");
    scanf("%c",&y);
    fflush(stdin);
    printf("Escriba un caracter:\n");
    scanf("%c",&z);
    if(x==y||y==z||z==x){
        printf("%c%c%c",x,y,z);
    }
    else{
        printf("Los caracteres no son iguales");
    }
}
