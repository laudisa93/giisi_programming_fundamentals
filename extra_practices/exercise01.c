#include <stdio.h>
/*Escriba un programa que lea desde teclado la fecha de nacimiento de una persona (d�a, mes y a�o) y
los imprima en la pantalla seg�n el formato del siguiente ejemplo:
Esta persona naci� el d�a 2 del mes de noviembre de 1982*/
void main(){
    int d,m,a;
    printf("Escriba su fecha de nacimiento:");
    scanf("%d %d %d",&d,&m,&a);
    printf("Esta persona naci� el %d/%d/%d",d,m,a);
}
