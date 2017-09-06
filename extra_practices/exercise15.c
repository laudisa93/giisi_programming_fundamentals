#include <stdio.h>
/*Escriba un programa que lea desde teclado un año e indique si es bisiesto o no. Tenga en cuenta que un año es bisiesto si
es divisible por 400 o bien si es divisible por 4 pero no por 100.*/
void main(){
    int x;
    printf("Escriba una año:\n");
    scanf("%d",&x);
    if((x%400==0)||((x%4==0)&&(x%100!=0))){
        printf("El año %d es bisiesto",x);
    }
    else
        printf("El año %d no es bisiesto",x);
}
