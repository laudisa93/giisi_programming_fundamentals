#include <stdio.h>
/*Escriba un programa que lea el número de filas, el número de columnas y los elementos de una matriz de enteros por
teclado e imprima en la pantalla otra matriz que contenga en cada posición la media de los elementos que lo rodean y
de él mismo. Apóyese en las funciones auxiliares que estime adecuadas.*/
#define MAX 100

float mediaDeElemento (int t[][MAX],int nfila,int ncolum,int ind1,int ind2);

void main(){
    int v[MAX][100],nfila,ncolum;
    float t[MAX][100];
    int i=0,j=0;

    printf("Introduzca el numero de filas y columnas: ");
    scanf("%d %d",&nfila,&ncolum);

    for(i=0;i<nfila;i++){
        for(j=0;j<ncolum;j++){
            printf("Elemento %d %d: ",i,j);
            scanf("%d",&v[i][j]);
        }
    }

    for(i=0;i<nfila;i++){
        for(j=0;j<ncolum;j++){
            t[i][j]=mediaDeElemento(v,nfila,ncolum,i,j);
        }
    }

    printf("\nLa matriz es:\n");
    for(i=0;i<nfila;i++){
        printf("\n");
        for(j=0;j<ncolum;j++){
            printf("%.2f ",t[i][j]);
        }
    }

}

float mediaDeElemento (int t[][MAX],int nfila,int ncolum,int ind1,int ind2){
    int i=0;
    int j=0;
    float suma=0.0;
    int contador=0;
    int aux11,aux12,aux21,aux22;
    float media;

    if((ind1==0) ||(ind1==nfila-1)){
        if(ind1==0){
            aux11=0;
            aux12=ind1+1;
        }
        else if(ind1==nfila-1){
            aux11=ind1-1;
            aux12=nfila-1;
        }
    }else {
        aux11=ind1-1;
        aux12=ind1+1;
    }
    if((ind2==0) ||(ind2==ncolum-1)){
        if(ind2==0){
            aux21=0;
            aux22=ind2+1;
        }else if(ind2==ncolum-1){
            aux21=ind2-1;
            aux22=ncolum-1;
        }
    }else {
        aux21=ind2-1;
        aux22=ind2+1;
    }

    for(i=aux11;i<=aux12;i++){
        for(j=aux21;j<=aux22;j++){
            suma=suma+t[i][j];
            contador++;
        }
    }
    media=suma/contador;
    return media;
}
