#include <stdio.h>
/*Escriba un programa que lea dos números enteros por teclado y determine cuál es el mayor y cuál es
el menor. También deberá considerar el caso en el que los dos números sean iguales.*/
void main(){
    int x,y;
    printf("Escriba dos numeros:");
    scanf("%d%d",&x,&y);
    if(x<y){
        printf("%d<%d",x,y);
    }
    else if(x>y){
        printf("%d>%d",x,y);
    }
    else
        printf("%d=%d",x,y);
}
