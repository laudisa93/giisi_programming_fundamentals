#include <stdio.h>
/*El programa objeto de este experimento ofrece como salida por pantalla el contenido de un array tridimensional de tama�o
2x4x3. Dicho array contendr� n�meros enteros y ser� inicializado de tal forma que su primera capa (primer elemento de la primera
dimensi�n) est� formada por la lista de n�meros impares comenzando por el 1, de tal forma que al terminar una fila se pasar� a la
siguiente hasta completar los 12 elementos que puede albergar la capa. De igual forma ser� inicializada la segunda capa, pero con
n�meros pares partiendo del n�mero 2.*/
#define TAM1 2
#define TAM2 4
#define TAM3 3
    void main(void){
        int m[TAM1][TAM2][TAM3] = {
            {
            {1,3,5},
            {7,9,11},
            {13,15,17},
            {19,21,23}
            },
            {
            {2,4,6},
            {8,10,12},
            {14,16,18},
            {20,22,24}
                }
            };
        int i,j,k;
            for(i=0;i<TAM1;i++){
                printf("k= ");
                for(k=0;k<TAM3;k++)
                    printf("%2d ",k);
                    printf("\n---------------- i=%d\n",i);
                for(j=0;j<TAM2;j++){
                    printf("j=%d |",j);
                    for(k=0;k<TAM3;k++)
                        printf("%2d ",m[i][j][k]);
                        printf("|\n");
                }
            printf("----------------\n");
            }
    }
