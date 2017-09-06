#include <stdio.h>
#define MAX 100

void rellenarMatriz(int nfila,int ncolum,int v[nfila][ncolum]);
void primerPrimo(int nfila,int ncolum,int v[nfila][ncolum],int *ind1,int *ind2);
int esPrimo(int numero);

void main(){
    int nfila,ncolum;
    int v[MAX][MAX];
    int ind1,ind2;

    printf("Introduzca el numero de filas: ");
    scanf("%d",&nfila);
    printf("Introduzca el numero de columnas: ");
    scanf("%d",&ncolum);

    rellenarMatriz(nfila,ncolum,v);
    primerPrimo(nfila,ncolum,v,&ind1,&ind2);

    if(ind1<0 && ind2<0){
        printf("\nNo se ha encontrado ningun primo en la matriz.");
    }
    else{
        printf("\nSe ha encontrado un numero primo en la fila %d, columna %d.",ind1,ind2);

    }

}

void rellenarMatriz(int nfila,int ncolum,int v[nfila][ncolum]){
    int i=0,j=0;

    printf("\nIntroduzca los elementos de la matriz:\n");
    for(i=0;i<nfila;i++){
        for(j=0;j<ncolum;j++){
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&v[i][j]);
        }
    }
}

void primerPrimo(int nfila,int ncolum,int v[nfila][ncolum],int *ind1,int *ind2){
    int i=0,j=0;
    int encontrado=0;

    for(i=0;i<nfila;i++){
        for(j=0;j<ncolum;j++){
            if(esPrimo(v[i][j])==1){
                *ind1=i;
                *ind2=j;
                encontrado=1;
            }
            if(encontrado==1){
                i=nfila;
                j=ncolum;
            }
        }
    }

    if(encontrado==0){
        *ind1=-1;
        *ind2=-1;
    }
}

int esPrimo(int numero){
    int encontrado=0;
    int i=2;

    while(i<numero && !encontrado){
        if(numero%i==0){
            encontrado=1;
        }
        else{
            encontrado=0;
        }
        i++;
    }
    if(encontrado==1){
        return 0;
    }
    else{
        return 1;
    }
}
