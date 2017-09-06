#include <stdio.h>
/*Escriba un programa que lea dos matrices cuadradas por el teclado cuyo número real de filas ó columnas venga
definido por una constante, que presente un menú con la opción de sumar, restar y multiplicar ambas matrices y
muestre en la pantalla el resultado de la operación elegida.*/
#define TAM 3
void main(){
    int v[TAM][TAM];
    int u[TAM][TAM];
    int t[TAM][TAM];
    int i=0,j=0,opcion;

    printf("\nMatriz 1: ");
    printf("\nIntroduzca el elemento: \n");
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("Fila %d, columna %d: ",i+1,j+1);
            scanf("%d",&v[i][j]);
        }
    }
    printf("\nMatriz 2: ");
    printf("\nIntroduzca el elemento: \n");
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("Fila %d, columna %d: ",i+1,j+1);
            scanf("%d",&u[i][j]);
        }
    }
    printf("\nMENU\n---------\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");

    printf("Elija una opcion: \n");
    scanf("%d",&opcion);

    switch(opcion){
        case 1:
             for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                    t[i][j]=v[i][j]+u[i][j];
                }
            }

            printf("\nMatriz resultante: \n");
            for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                    printf("%d ",t[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                    t[i][j]=v[i][j]-u[i][j];
                }
            }

            printf("\nMatriz resultante: \n");
            for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                    printf("%d ",t[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            for(j=0;j<TAM;j++){
                for(i=0;i<TAM;i++){

                }
            }

            printf("\nMatriz resultante: \n");
            for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                    printf("%d ",t[i][j]);
                }
                printf("\n");
            }
            break;
    }


}
