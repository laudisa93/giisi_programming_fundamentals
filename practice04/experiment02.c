#include <stdio.h>
/*El programa objeto de este experimento ofrece como salida por pantalla el contenido de un array tridimensional de tamaño
2x4x3. Dicho array contendrá números enteros y será inicializado de tal forma que su primera capa (primer elemento de la primera
dimensión) esté formada por la lista de números impares comenzando por el 1, de tal forma que al terminar una fila se pasará a la
siguiente hasta completar los 12 elementos que puede albergar la capa. De igual forma será inicializada la segunda capa, pero con
números pares partiendo del número 2.*/
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
