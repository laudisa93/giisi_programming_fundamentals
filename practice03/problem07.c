#include <stdio.h>
/*Visualizar en pantalla una figura similar a la siguiente
*
**
***
****
*****
siendo variable el número de líneas que se pueden introducir.*/
void main(){
    int nlinea=0,i=0,j=0,cont=1;
    printf("Introduzca el numero de lineas: ");
    scanf("%d",&nlinea);

    for(i=0;i<nlinea;i++){
        for(j=0;j<cont;j++){
            printf("*");
        }
        cont++;
        printf("\n");
    }
}
