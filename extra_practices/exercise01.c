#include <stdio.h>
/*Escriba un programa que lea desde teclado la fecha de nacimiento de una persona (día, mes y año) y
los imprima en la pantalla según el formato del siguiente ejemplo:
Esta persona nació el día 2 del mes de noviembre de 1982*/
void main(){
    int d,m,a;
    printf("Escriba su fecha de nacimiento:");
    scanf("%d %d %d",&d,&m,&a);
    printf("Esta persona nació el %d/%d/%d",d,m,a);
}
