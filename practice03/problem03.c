#include <stdio.h>
/*Escriba un programa que muestre por pantalla el siguiente tri�ngulo:
123456789
2468
369
48
5
N�tese que cada fila comienza con el n�mero siguiente al primero de la fila anterior, y que los
siguientes elementos de la fila son el n�mero que resulta de sumar el primer elemento de la fila
m�s el elemento anterior al n�mero que estamos calculando.*/
void main(){
    int i=0,j=0;
    for(j=0;j<5;j++){
        for(i=1;i<=9;i++){

            if(j==0){
                printf("%d",i);
            }
            else if(j==1 && i%2==0){
                printf("%d",i);
            }
            else if(j==2 && i%3==0){
                printf("%d",i);
            }
            else if(j==3 && i%4==0){
                printf("%d",i);
            }
            else if(j==4 && i%5==0){
                printf("%d",i);
            }

        }printf("\n");

    }


}

