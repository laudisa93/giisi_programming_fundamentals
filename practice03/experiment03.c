/*Analice y ejecute paso a paso el siguiente algoritmo para comprender su funcionamiento.*/
#include<stdio.h>
void main(void){
    int i,j;
    for(i=1;i<=100;i++){
        j = i;
        if(j%10<5)
            j = (j/10) * 10;
        else
            j = (j/10) * 10 + 10;
        printf("%d -> %d\n",i,j);
    }
}
/*�Qu� calcula el programa? �Qu� diferencias hay con el c�digo del experimento anterior?
�Cu�l es m�s eficiente?*/
