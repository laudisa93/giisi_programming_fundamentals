#include <stdio.h>
/*Escriba un programa que lea dos n�meros enteros por teclado y determine cu�l es el mayor y cu�l es
el menor. Tambi�n deber� considerar el caso en el que los dos n�meros sean iguales.*/
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
