#include <stdio.h>
/*Escriba un programa que determine el máximo y el mínimo de un array de datos enteros. Para ello implemente dos
funciones, una que devuelva el máximo y otra que devuelva el mínimo.*/

int maximo(int v[],int tam);
int minimo(int v[], int tam);

void main(){
    int tam,i;
    int max,min;
    printf("Introduzca el tamaño del array:");
    scanf("%d",&tam);
    int v[tam];
        for (i=0;i<tam;i++){
            printf("\nEscriba el elemento %d: ", i+1);
            scanf("%d",&v[i]);
        }

    max=maximo(v,tam);
    printf("\nEl maximo es %d", max);
    min=minimo(v,tam);
    printf("\nEl minimo es %d", min);
}

int maximo (int v[],int tam){
    int i,mayor=v[0];
    for (i=1;i<tam;i++){
        if(v[i]>mayor){
            mayor=v[i];
        }
    }return mayor;
}

int minimo (int v[],int tam){
    int i,menor=v[0];
    for (i=1;i<tam;i++){
        if(v[i]<menor){
            menor=v[i];
        }
    }return menor;
}
