#include <stdio.h>
/*Escriba un programa que lea desde teclado un a�o e indique si es bisiesto o no. Tenga en cuenta que un a�o es bisiesto si
es divisible por 400 o bien si es divisible por 4 pero no por 100.*/
void main(){
    int x;
    printf("Escriba una a�o:\n");
    scanf("%d",&x);
    if((x%400==0)||((x%4==0)&&(x%100!=0))){
        printf("El a�o %d es bisiesto",x);
    }
    else
        printf("El a�o %d no es bisiesto",x);
}
