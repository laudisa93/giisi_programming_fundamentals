#include <stdio.h>
/*Escriba un programa que pida desde teclado los elementos enteros de un array de tamaño 3x4. Una vez leído el
array se mostrará éste por pantalla.*/

void main(){
    int i=0,j=0,v[3][4];

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Introduzca el elemento de la fila %d, columna %d\n",i+1,j+1);
            scanf("%d",&v[i][j]);
        }
    }
    printf("j=   ");
    for(j=0;j<4;j++)
        printf("%2d ",j);
        printf("\n------------------\n");
    for(i=0;i<3;i++){
            printf("i=%d |",i);
            for(j=0;j<4;j++)
                printf("%2d ",v[i][j]);
                printf("|\n");
        }
}
